#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define M 33005
bool prime[M];
vector <long int > primes;
void sieve()
{
    prime[0]=prime[1]=true;
    for(long int i=3;i*i<=M;i+=2)
        if(prime[i]==false)
           for(long int j=i*i;j<=M;j+=i+i)
              prime[j]=true;
    primes.push_back(2);
    for(long int i=3;i<=M;i+=2)
        if(prime[i]==false)
            primes.push_back(i);
}
int main()
{
    long int a,b,i,j;
    sieve();
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0&&b==0)break;
        if(a>b)swap(a,b);
        i=0;
        while(primes[i]<a) i++;
        while(primes[i+2]<=b)
        {
            if(primes[i+2]-primes[i+1]==primes[i+1]-primes[i])
            {
                int start=i;
                int ends=i+2;
                int dif=primes[i+2]-primes[i+1];
                while(i+3<primes.size()&&dif==primes[i+3]-primes[i+2])
                    ends++,i++;
                if(primes[ends]<=b)
                    if(start==0||primes[start]-primes[start-1]!=dif)
                       {
                           printf("%ld",primes[start]);
                           for(j=start+1;j<=ends;j++)
                            printf(" %ld",primes[j]);
                            printf("\n");
                       }
                 else break;
            }
            i++;
        }
    }
    return 0;
}

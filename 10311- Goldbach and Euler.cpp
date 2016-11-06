#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define M  100000005
using namespace std;
bool prime[M];
void primeGenerate()
{
    long long int i,j,m;
    m=(long long int)sqrt(M);
    memset (prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2; i<m; i++)
        if(prime[i])
            for(j=i+i; j<M; j+=i)
                prime[j]=false;
}
int main()
{
    long long n,i,g,pr1,pr2;
    primeGenerate();
    while(scanf("%lld",&n)==1)
    {
        g=0;
        if(n%2==1)
        {
            if(prime[n-2]==0)printf("%llu is not the sum of two primes!\n",n);
            else printf("%llu is the sum of 2 and %llu.\n",n,n-2);
        }
        else
        {
            for(i=(n>>1)-1; i>=1; i--)
                if(prime[i] && prime[n-i])
                {
                    g=1;
                    pr1=i;
                    pr2=n-i;
                    break;
                }
            if(g==1)
                printf("%lld is the sum of %lld and %lld.\n",n,pr1,pr2);
            else if(g==0)
                printf("%lld is not the sum of two primes!\n",n);
        }
    }
    return 0;
}

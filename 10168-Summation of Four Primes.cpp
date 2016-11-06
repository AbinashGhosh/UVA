#include<cstdio>
#include<cmath>
#define M 214748364
bool prime[M];
void sieve()
{
    for(long int i=3;i*i<=M;i+=2)
        if(prime[i]==false)
           for(long int j=i*i;j<=M;j+=i+i)
              prime[j]=true;
}
bool Prime(long int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    return prime[n]==false;
}

int main()
{
    long int n,num[4],i,j,check;
    sieve();
    while(scanf("%ld",&n)==1)
    {
        check=0;
        if(n<8) printf("Impossible.\n");
        else
        {
            if(n%2==0){num[0]=2,num[1]=2,n-=4;}
            else {num[0]=2,num[1]=3,n-=5;}
                if(Prime(21))printf("dfb");
            for(i=2;i<=n/2;++i)
                if(Prime(i)&&Prime(n-i))
                {
                    printf("%ld %ld %ld %ld\n",num[0],num[1],i,n-i);
                    break;
                }
        }
    }
    return 0;
}

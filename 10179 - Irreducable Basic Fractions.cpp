#include<cstdio>
long phi(long n)
{
    long rel=n;
    for(long i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            while(n%i==0)n/=i;
            rel-=rel/i;
        }
    }
    if(n>1)rel-=rel/n;
    return rel;
}
int main()
{
    long N,i;
        while(scanf("%ld",&N)==1)
        {
             if(N==0)break;
             printf("%ld\n",phi(N));
        }

    return 0;
}


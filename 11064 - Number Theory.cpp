#include<cstdio>
long phi_div(long n)
{
    long rel=n,divisor=1,pow;
    for(long i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            pow=0;
            while(n%i==0)
            {
                n/=i;
                pow++;
            }
            rel-=rel/i;
            divisor*=pow+1;
        }
    }
    if(n>1)
    {
        rel-=rel/n;
        divisor*=2;
    }
    return rel+divisor-1;
}
int main()
{
    long N,i;
        while(scanf("%ld",&N)!=EOF)
        {
             printf("%ld\n",N-phi_div(N));
        }

    return 0;
}


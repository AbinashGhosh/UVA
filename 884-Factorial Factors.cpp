#include<cstdio>
int factors[1000005];
long factor_count(long n)
{
    long factor=0,pow;
    for(long i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            pow=0;
            while(n%i==0)
            {
                pow++;
                n/=i;
            }
            factor+=pow;
        }
    }
    if(n!=1)factor++;
    return factor;
}
int main()
{
    long factor,N,i;
    factors[1]=0;
    for(i=2;i<=1000001;++i)
            factors[i]=factors[i-1]+factor_count(i);
    while(scanf("%ld",&N)==1)
    {
        printf("%ld\n",factors[N]);
    }
    return 0;
}

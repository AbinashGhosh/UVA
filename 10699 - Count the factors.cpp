#include<cstdio>
long int divisor_count(long int  n)
{
    long int divisor=0,pow;
    for(long int i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            pow=0;
            while(n%i==0)
            {
                pow=1;
                n/=i;
            }
            divisor+=pow;
        }
    }
    if(n!=1)divisor++;
    return divisor;
}
int main()
{
    long N;
    while(scanf("%ld",&N))
    {
        if(N==0)break;
        printf("%ld : %ld\n",N,divisor_count(N));
    }
    return 0;
}



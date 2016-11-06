#include<cstdio>
long int sqfree,MN[1000005];
long int divisor_count(long int  n)
{
    long int divisor=0,pow;
    sqfree=0;
    for(long int i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            pow=0;
            while(n%i==0)
            {
                pow++;
                n/=i;
            }
            if(pow>1)sqfree=1;
            divisor+=pow;
        }
    }
    if(n!=1)divisor++;
    return divisor;
}
int main()
{
    long N,i,j,factor,mun;
    MN[0]=0;MN[1]=1;
    for(i=2;i<=1000000;++i)
    {
        factor=divisor_count(i);
        if(sqfree==0)
        {
            if(factor%2==0)mun=1;
            else mun=-1;
        }
        else mun=0;
        MN[i]=MN[i-1]+mun;
    }
    while(scanf("%ld",&N))
    {
        if(N==0)break;
        printf("%8ld%8ld%8ld\n",N,MN[N]-MN[N-1],MN[N]);
    }
    return 0;
}

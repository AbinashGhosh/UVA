#include<cstdio>
#include<cmath>
long long divis[100002],sigma[100002];
void divisor_count(long int  n)
{
    long long int divisor=1,powe,sum=1,s=n;
    for(long int i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            powe=0;
            while(n%i==0)
            {
                powe++;
                n/=i;
            }
            if(powe>1)sum*=((pow(i,powe+1)-1)/(i-1)+0.000000000001);
            else sum*=(i+1);
            divisor*=powe+1;
        }
    }
    if(n!=1)
    {
        divisor*=2;
        sum*=(n+1);
    }
     divis[s]=divisor;
     sigma[s]=sum;
}
int  main()
{
    long long int N,i,U,L,T,D,gsum,hsum;
    for(i=1;i<=100000;++i)
        divisor_count(i);
        scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld%lld%lld",&L,&U,&D);
        gsum=0,hsum=0;
        if(L%D!=0)
        L=L-(L%D)+D;
        for(i=L;i<=U;i+=D)
        {
            gsum+=divis[i];
            hsum+=sigma[i];
        }
        printf("%lld %lld\n",gsum,hsum);

    }
    return 0;
}

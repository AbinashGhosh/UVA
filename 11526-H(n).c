#include<stdio.h>
#include<math.h>
long long H(long long int n)
{
    if(n<=0)return 0;
    long long t=0,l,i;
    l=(long long int)(sqrt(n));
    for(i=1;i<=l;i++)
       t += n/i;
    t=t+(t-(l*l));
    return t;
}
int  main()
{
    long long n,t;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",(long long int )H(n));
    }
    return 0;
}

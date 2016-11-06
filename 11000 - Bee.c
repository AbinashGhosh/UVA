#include<stdio.h>
int main()
{
    long long int i,m,f,t,n,tem=0;
    while(scanf("%lld",&n)==1&&n!=-1)
    {
        m=0;t=1;f=1;
        for(;n>0;n--)
        {
            tem=f;
            f=m+1;
            m=m+tem;
        }
        t=m+f;

       printf("%lld %lld\n",m,t);

    }
    return 0;
}

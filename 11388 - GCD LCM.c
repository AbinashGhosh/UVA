#include<stdio.h>
long long int GCD(long long int n1, long long int n2)
{
    long long int num3;

    while(n2>0)
    {
        num3=(n1%n2);
        n1=n2;
        n2=num3;
    }
    return n1;
}
int main()
{
    long long int n1,n2,G,L,i,J,K,t;

    while(scanf("%lld",&t)==1)
    {
        for(i=0; i<t; i++)
        {
            scanf("%lld%lld",&n1,&n2);
            G=GCD(n1,n2);
            L=(n1*n2)/G;
            if(G==n1&&L==n2)
                printf("%lld %lld\n",G, L);
            else
                printf("-1\n");
        }
    }
    return 0;
}

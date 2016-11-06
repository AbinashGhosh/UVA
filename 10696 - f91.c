#include<stdio.h>
long long int f91(long long int s)
{
    long long int c;
    if(s<=100)
    c=f91(f91(s+11));
    else
    c=s-10;

    return c;
}
int main()
{
    long long int s,a;
    while(scanf("%lld",&s)==1)
    {
        if(s==0)break;
        a=f91(s);
        printf("f91(%lld) = %lld\n",s,a);
    }
    return 0;
}

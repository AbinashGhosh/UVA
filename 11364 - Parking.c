#include<stdio.h>
int main()
{
    long long int t,c,d,max,min;
    scanf("%lld",&t);
    for(;t>0;t--)
    {
        max=-1;min=200;
        scanf("%lld",&c);
        for(;c>0;c--)
        {
            scanf("%lld",&d);
            if(max<d)
            max=d;
            if(min>d)
            min=d;

        }
        printf("%lld\n",(max-min)*2);
    }
    return 0;
}

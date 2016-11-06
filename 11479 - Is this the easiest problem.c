#include<stdio.h>
int main()
{
    long long int t,a,b,c,i;
    while(scanf("%lld",&t)==1)
    {
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("Case %lld: ",i);
        if((a+b)>c&&(b+c)>a&&(c+a)>b)
        {
            if(a==b&&b==c)
            printf("Equilateral\n");
            else if(a==b||b==c||c==a)
            printf("Isosceles\n");
            else
            printf("Scalene\n");
        }
        else
        printf("Invalid\n");
    }
    }
    return 0;
}

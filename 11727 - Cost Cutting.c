#include<stdio.h>
int main()
{
    long int t,a,b,c,max,min,i;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        max=c>(a>b?a:b)?c:(a>b?a:b);
        min=c<(a<b?a:b)?c:(a<b?a:b);
        printf("Case %ld: ",i);
        if(a==max)
        {
            if(b==min)
            printf("%ld",c);
            else
            printf("%ld",b);
        }
        else if(b==max)
        {
            if(a==min)
            printf("%ld",c);
            else
            printf("%ld",a);
        }
        else
        {
            if(a==min)
            printf("%ld",b);
            else
            printf("%ld",a);
        }
        printf("\n");
    }
    return 0;
}

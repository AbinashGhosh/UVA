#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int a,b,c,t,max;
    while(scanf("%llu%llu%llu",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)
        break;
        max=c>(a>b?a:b)?c:(a>b?a:b);
        if(a>0&&b>0&&c>0)
        {
            if(a==max&&(a*a==b*b+c*c))
            printf("right\n");
            else if(b==max&&(b*b==a*a+c*c))
             printf("right\n");
             else if(c==max&&(c*c==a*a+b*b))
             printf("right\n");
             else
             printf("wrong\n");

        }

    }
    return 0;
}

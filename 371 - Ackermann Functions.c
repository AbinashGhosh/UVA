#include<stdio.h>
int main()
{
    unsigned long long int a,b,count,i,n,count1,x,y,max;
    while((scanf("%llu%llu",&x,&y))==2)
    {
        if(x==0&&y==0)
        break;
        if(x>y){ b=x;a=y;}
        else {a=x;b=y;}
        count=0;
        for(i=a;i<=b;i++)
        {
           count1=0;

           n=i;
           do
           {
               if(n%2==1)
               n=3*n+1;
               else
               n=n/2;
               count1++;
           }
           while(n!=1);
           if(count1>=count)
           {
               if(count1>count)
               max=i;
               count=count1;

           }

        }
        printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n",a,b,max,count);

    }
    return 0;
}


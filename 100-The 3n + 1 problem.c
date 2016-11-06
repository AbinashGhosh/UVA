#include<stdio.h>
int main()
{
    unsigned long long int a,b,count,i,n,count1,x,y;
    while((scanf("%llu%llu",&x,&y))!=EOF)
    {
        if(x>y){ b=x;a=y;}
        else {a=x;b=y;}
        count=1;
        for(i=a;i<=b;i++)
        {
           count1=1;

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
           if(count1>=count)count=count1;

        }
        printf("%llu %llu %llu\n",x,y,count);

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int ans,a,x,y,t;
   while(scanf("%d",&a)!=EOF)
   {

       ans=0;t=a;

       while(a>1)
       {
           x=a/3;
           ans+=x;
           y=a%3;
           a=x+y;
           if(a==2)
           {
              ans++;break;
           }

       }
       printf("%d\n",ans+t);
   }
   return 0;
}

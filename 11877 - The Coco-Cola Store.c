#include<stdio.h>
int main()
{
    int ans,a,x,y;
   while(scanf("%d",&a)==1)
   {
       if(a==0)break;
       ans=0;

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
       printf("%d\n",ans);
   }
   return 0;
}

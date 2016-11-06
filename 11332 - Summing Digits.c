#include<stdio.h>
int main()
{
   unsigned  long long int s,p,m,sum;
   while(scanf("%llu",&s)==1)
   {

       if(s==0)break;
       while(s>9)
       {
           p=s; sum=0;
           while(p>0)
           {
               m=p%10;
               sum=sum+m;
               p=p/10;
           }
           s=sum;
       }
       printf("%llu\n",s);
   }

return 0;
}

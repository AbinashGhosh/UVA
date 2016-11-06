#include<stdio.h>
int main()
{
   int t,n,num[100],p,j,count,c,i;
   scanf("%d",&t);
   while(t--)
   {
       c=0;
       scanf("%d%d",&n,&p);
       for(j=0;j<p;j++)
       scanf("%d",&num[j]);
       for(i=1;i<=n;i++)
       {
           count=0;
           if(i%7!=6&&i%7!=0)
           {
               for(j=0;j<p;j++)
               {
                   if(i%num[j]==0){count=1;break;}
               }
               if(count==1)c++;
           }

       }
       printf("%d\n",c);
   }

return 0;
}

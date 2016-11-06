#include <stdio.h>
int main()
{
   int a,i;
   unsigned long long s,sum=0;
   while(scanf("%d",&a)==1 && a!=0)
   {
      sum=0;
      for(i=1;i<=a;i++)
      {
          s=i*i;
          sum=sum+s;
      }
       printf("%llu\n",sum);
   }
 return 0;
}

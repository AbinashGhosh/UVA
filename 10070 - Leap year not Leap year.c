
#include<stdio.h>
int main()
{
  unsigned long long int y,i=0,j=0,k=0,c=0;
   while(scanf("%llu",&y)==1)
   {
       if(c>0)
        printf("\n");
        c++;
       if((y%4==0&&y%100!=0)||y%400==0)
       {
           printf("This is leap year.\n");
           i=1;
       }
       if(y%15==0)
       {
           printf("This is huluculu festival year.\n");
           j=1;
       }

       if(y%55==0&&i==1)
       {
           printf("This is bulukulu festival year.\n");
           k=1;
       }
       if(i==0&&j==0&&k==0)
       printf("This is an ordinary year.\n");

       i=j=k=0;

   }
return 0;
}
//condition For  leap year
//((y%4==0&&y%100!=0)||y%400==0)


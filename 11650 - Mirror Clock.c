#include<stdio.h>
int main()
{
   int h,m,t,rh,rm,time;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d:%d",&h,&m);
        time = h*60 + m;
        if (time>720) time-=720;
        time = 720-time;

        rh = (time/60);
        rm = time%60;
        if (!rh) rh = 12;


       printf("%02d:%02d\n",rh,rm);

   }
   return 0;
}

#include<stdio.h>
int main()
{
     int nwspd,spd=0,h,m,s,n,now=0,next;
     double dis=0;
     char c;
     while(scanf("%d:%d:%d",&h,&m,&s)==3)
     {
         scanf("%c",&c);
         if(c!='\n')
         n=scanf("%d",&nwspd);
         else n=0;
         next=h*3600+m*60+s;
         dis=dis+(double)((next-now)*spd)/3600;
         if(n==0)
         printf("%02d:%02d:%02d %.2lf km\n",h,m,s,dis);
         else
         spd=nwspd;
         now=next;
     }

    return 0;
}

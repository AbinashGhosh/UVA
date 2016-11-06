#include<stdio.h>
int main()
{
    float h,m,ans;
    while(scanf("%f:%2f",&h,&m)==2)
    {
        if(h==0&&m==0)break;
            ans=h*30+(m/2)-(m*6);
            if(ans<0)ans=ans*(-1);
            if(ans>(360-ans))ans=360-ans;
            printf("%.3f\n",ans);
    }
return 0;
}

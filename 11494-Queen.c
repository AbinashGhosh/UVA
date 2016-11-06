#include<stdio.h>
int main()
{
    int a,b,fx,fy,ex,ey,r;
    while(scanf("%d%d%d%d",&fx,&fy,&ex,&ey)!=EOF)
    {
        if(fx==0&&fy==0&&ex==0&&ey==0)
        break;
        a=fx>ex?(fx-ex):(ex-fx);
        b=fy>ey?(fy-ey):(ey-fy);
        if(a==0&&b==0)
        r=0;
        else if(a==0||b==0)
        r=1;
        else if(a==b)
        r=1;
        else
        r=2;
        printf("%d\n",r);

    }
    return 0;
}

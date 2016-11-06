#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int a,n,counts=0,i=0,T=1,st;
    double x1[12],x2[12],y1[12],y2[12],cx,cy;
    while(scanf("%c",&ch))
    {
        if(ch=='*')break;
        scanf("%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i]);
        getchar();
        i++;
        counts++;
    }
    while(scanf("%lf%lf",&cx,&cy)==2)
    {
        st=-1;
        if(cx==9999.9&& cy==9999.9)break;
        for(i=0;i<counts;i++)
        {
            if(cx>x1[i]&&cx<x2[i]&&cy<y1[i]&&cy>y2[i])
            {
                st=i;
                printf("Point %d is contained in figure %d\n",T,st+1);
            }

        }
        if(st==-1)
            printf("Point %d is not contained in any figure\n",T);
            T++;
    }
    return 0;
}

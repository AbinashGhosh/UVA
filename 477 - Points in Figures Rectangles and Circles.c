#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int a,n,counts=0,i=0,T=1,st;
    double x1[12],x2[12],y1[12],y2[12],cx,cy,rad[12],cntx[12],cnty[12],cheak[12],p,h,ot;
    while(scanf("%c",&ch))
    {
        if(ch=='*')break;
        if(ch=='r')
        {
            scanf("%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i]);
            cheak[i]=1;
        }

        else if(ch=='c')
        {
            scanf("%lf%lf%lf",&cntx[i],&cnty[i],&rad[i]);
            cheak[i]=2;
        }

        getchar();
        i++;
        counts++;
    }
    while(scanf("%lf%lf",&cx,&cy)==2)
    {
        st=-1;
        if(cx==9999.9&& cy==9999.9)break;
        for(i=0; i<counts; i++)
        {
            if(cheak[i]==1)
            {
                if(cx>x1[i]&&cx<x2[i]&&cy<y1[i]&&cy>y2[i])
                {
                    st=i;
                    printf("Point %d is contained in figure %d\n",T,st+1);
                }
            }

            else if(cheak[i]==2)
            {

                h=cy-cnty[i];
                p=cx-cntx[i];
                if((h*h+p*p)<rad[i]*rad[i])
                {
                    st=i;
                    printf("Point %d is contained in figure %d\n",T,st+1);
                }


            }

        }
        if(st==-1)
            printf("Point %d is not contained in any figure\n",T);
        T++;
    }
    return 0;
}


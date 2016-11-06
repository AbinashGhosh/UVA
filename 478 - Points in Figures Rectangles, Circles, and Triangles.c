#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int a,n,counts=0,i=0,T=1,st;
    double x1[12],x2[12],x3[12],y1[12],y2[12],y3[12],cx,cy,rad[12],cntx[12],cnty[12],cheak[12],p,h,A,A1,A2,A3;
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
        else
        {
            scanf("%lf%lf%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i],&x3[i],&y3[i]);
            cheak[i]=3;
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
            else if(cheak[i]==3)
            {
                A=fabs((x2[i]-x1[i])*(y3[i]-y1[i])-(x3[i]-x1[i])*(y2[i]-y1[i]));
               A1=fabs((x2[i]-cx)*(y3[i]-cy)-(x3[i]-cx)*(y2[i]-cy));
               A2=fabs((cx-x1[i])*(y3[i]-y1[i])-(x3[i]-x1[i])*(cy-y1[i]));
               A3=fabs((x2[i]-x1[i])*(cy-y1[i])-(cx-x1[i])*(y2[i]-y1[i]));
               if(fabs(A-A1-A2-A3)<=0.000001)
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

/*To identify whether a point is inside a triangle:

form three other triangles; each having the considered point as one of the vertices. Add the sum of the area of these three triangles. If it is equal to the area of the original then the point is inside the triangle ; no otherwise.

Mathematically : Let ABC be the original traingle and P the point.

if Area of ( PAB + PAC + PBC ) == Area of ABC then inside
else outside.*/


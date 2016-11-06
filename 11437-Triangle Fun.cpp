#include<cstdio>
#include<cmath>
double side(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
    double x1,y1,x2,y2,x3,y3,side1,side2,side3,A,S;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        side1=side(x1,y1,x2,y2);
        side2=side(x1,y1,x3,y3);
        side3=side(x3,y3,x2,y2);
        S=(side1+side2+side3)/2;
        A=(sqrt(S*(S-side1)*(S-side2)*(S-side3)))/7;
        printf("%.0lf\n",A);
    }
    return 0;
}


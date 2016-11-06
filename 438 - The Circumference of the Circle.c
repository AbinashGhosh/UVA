#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793
int main()
{
    double x1,x2,x3,y1,y2,y3,arm1,arm2,arm3,s,A,r,ans;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        arm1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        arm2 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        arm3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        s=(arm1+arm2+arm3)/2;
        A =sqrt(s*(s-arm1)*(s-arm2)*(s-arm3));
        r =(arm1*arm2*arm3)/(4*A);
        ans =2*pi*r;
        printf("%.2lf\n",ans);
    }

    return 0;
}

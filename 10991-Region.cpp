#include<cstdio>
#include<cmath>
double angle(double a,double b,double c)
{
    return acos((a*a+b*b-c*c)/(2*a*b));
}
int main()
{
    double r1,r2,r3,A,a,b,c;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        A=sqrt((r1+r2+r3)*r1*r2*r3);//A=sqrt(s(s-a)(s-b)(s-c))
        A=A-(r1*r1)*(angle(a,b,c)/2)-(r2*r2)*(angle(a,c,b)/2)-(r3*r3)*(angle(b,c,a)/2);
        printf("%.6lf\n",A);
    }

    return 0;
}

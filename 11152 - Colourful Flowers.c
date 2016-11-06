#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,T,I,O,R,r;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        T= sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4*T);
        O=3.141592653589793238462643*R*R;
        r=(T/s);
        I=3.141592653589793238462643*r*r;
        printf("%.4lf %.4lf %.4lf\n",O-T,T-I,I);
    }

    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    double a, b,r;
    while(scanf("%lf%lf",&r,&b)!=EOF)
    {
        a=r*r*b/2*sin(2*3.141592653589/b);
        printf("%.3lf\n",a);
    }
    return 0;
}

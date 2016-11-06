#include<cstdio>
#include<cmath>
long double a,b,c,r,s;
int main()
{

    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
        if(a||b||c)
            s = (a+b+c)/2,
            r = sqrt((s-a)*(s-b)*(s-c)/s),
            printf("The radius of the round table is: %.3lf\n",r);
        else
            printf("The radius of the round table is: 0.000\n");
    }
    return 0;
}

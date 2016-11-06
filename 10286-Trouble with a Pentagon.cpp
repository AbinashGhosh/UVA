#include<cstdio>
#include<cmath>
#define PI acos(-1)
using namespace std;
int main()
{
    double penta_l,square_l;
    while(scanf("%lf",&penta_l)==1)
    {
        square_l=penta_l*(sin((108*PI)/180)/sin((63*PI)/180));
        printf("%.10lf\n",square_l);
    }
    return 0;
}

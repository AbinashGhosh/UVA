#include<stdio.h>
#include<math.h>
int main()
{
    long int T,L;
    double A;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld",&L);
        A=(double)(acos(-1.0)*L*L)/25;
        printf("%.2lf %.2lf\n",A,(double)(L*L*6)/10-A);
    }
    return 0;
}

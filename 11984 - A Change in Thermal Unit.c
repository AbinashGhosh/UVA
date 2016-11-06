#include<stdio.h>
int main()
{
    float t,a,b,i,f,c;
    scanf("%f",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f",&a,&b);
        f=((9*a)/5)+32+b;
        c=((5*(f-32))/9);
        printf("Case %.0f: %0.2f\n",i,c);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c=0;
    while(scanf("%lld",&a)&&a!=0)
    {
        c++;
        b=ceil((3+sqrt(9+8*a))/2);
        printf("Case %lld: %lld\n",c,b);
    }

   return 0;
}

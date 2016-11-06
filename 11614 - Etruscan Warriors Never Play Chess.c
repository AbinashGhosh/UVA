#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int a,b,t,i;
    scanf("%llu",&t);
    for(;t>0;t--)
    {
        scanf("%llu",&a);
        i=((unsigned long long int)sqrt(8*a+1)-1)/2;

        printf("%llu\n",i);
    }
    return 0;
}

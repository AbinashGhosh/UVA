#include<stdio.h>
int main()
{
    long int a,b,r;
    while(scanf("%ld%ld",&a,&b)==1)
    {
        r=a^b;
        printf("%ld\n",r);
    }
 return 0;
}

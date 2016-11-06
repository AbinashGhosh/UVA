#include<stdio.h>
int main()
{
    unsigned long long int a,b,n;
    while((scanf("%llu%llu",&a,&b))!=EOF)
    {
        if(a>b)
        n=a-b;
        else
        n=b-a;
        printf("%llu\n",n);
    }
return 0;
}

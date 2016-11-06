#include<stdio.h>
int main()
{
    unsigned long long int t,a,b,i;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%llu%llu",&a,&b);
        if(a<b)printf("<");
        else if(a>b)printf(">");
        else if(a==b)printf("=");
        printf("\n");
    }
    return 0;
}


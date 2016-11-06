#include <stdio.h>
void calc(int d, int base)
{
    int i;
    unsigned long int a;
    for (i=0; i<base; i++)
    {
        a=i*i;
        if(i==(a/base)+(a%base))
        {
            printf("%0*ld\n",d,a);
        }
    }
}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==2)
            calc(2, 10);
        else if(n==4)
            calc(4, 100);
        else if(n==6)
            calc(6, 1000);
        else if(n==8)
            calc(8, 10000);
    }
    return 0;
}

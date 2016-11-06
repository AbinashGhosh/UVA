#include <stdio.h>
int main()
{
    int n=0,mod;
    while (scanf("%d",&n)&&n!=0)
    {
        mod = n %5;
        if (mod == 0)
            printf("0.00\n");
        else if (mod == 1 || mod == 4)
            printf("0.40\n");
        else if (mod == 2 || mod == 3)
            printf("0.20\n");
    }
    return 0;
}

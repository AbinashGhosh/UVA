#include <stdio.h>
#include <string.h>
#define min(a,b) (a<b?a:b)
char inp[100];
int main()
{
    int test, x, y;
    char a;
    scanf("%d",&test);
    getchar();
    while (test--)
    {
        a=getchar();

        scanf("%d %d",&x,&y);
        if (a=='k')
            printf("%d\n",(x*y+1)/2);
        else if (a=='K')
            printf("%d\n",((x+1)/2) * ((y+1)/2));
        else if (a=='Q'||a=='r')
            printf("%d\n",min(x,y));
        getchar();
    }
    return 0;
}

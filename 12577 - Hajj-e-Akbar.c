#include<stdio.h>
int main()
{
    char a[10];
    int i=1,j;
    while(scanf("%s",a)!=EOF)
    {
        if(a[0]=='*')
        break;
        if(a[0]=='H')
        printf("Case %d: Hajj-e-Akbar\n",i);
        else
        printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}

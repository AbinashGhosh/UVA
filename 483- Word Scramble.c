#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],l;
    int i,k;
    while(scanf("%s",&c)!=EOF)
    {
        scanf("%c",&l);
        i=strlen(c);
        for(k=i-1;k>=0;k--)
        printf("%c",c[k]);
        if(l=='\n')
        printf("\n");
        else
        printf(" ");
    }
    return 0;
}

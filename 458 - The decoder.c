#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch[1000], i, a;
    while(scanf("%c", &ch[0])==1)
    {
        for(i=0; ch[i]!='\n'; i++)
        {
            ch[i+1]=getchar();
        }
        for(a=0; a<i; a++)
        {
            putchar(ch[a]-7);
        }
        putchar('\n');
 }
 return 0;
}

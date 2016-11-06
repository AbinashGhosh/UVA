#include <stdio.h>
#include <ctype.h>
int main()
{
    char p,ch;
    int i,j,count;
    p=' ';
    count=0;
    while((scanf("%c",&ch)==1))
    {
        if(isalpha(ch)&&!(isalpha(p)))
        {
            count++;
        }
        p=ch;
        if(ch=='\n')
        {
            printf("%d\n",count);
            count=0;
        }
    }
    return 0;
}

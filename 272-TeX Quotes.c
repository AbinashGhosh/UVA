#include<stdio.h>
int main()
{
    char ch;
    long int i=1;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='"')
        {
            if(i%2==1)
            printf("``");
            else if(i%2==0)
            printf("''");
            i++;
        }
        else
        printf("%c",ch);

    }

    return 0;
}

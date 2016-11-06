#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    long int k,counts=0,i;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isdigit(ch))
            counts=counts+(ch-'0');

        else if(ch=='b')
        {
            while(counts--)printf(" ");
            counts=0;
        }
        else if(ch=='!'||ch=='\n')printf("\n");
        else if(ch=='*')
        {
            while(counts--)printf("*");
            counts=0;
        }
        else if(isalpha(ch))
        {
            while(counts--)printf("%c",ch);
            counts=0;
        }
    }
    return 0;
}

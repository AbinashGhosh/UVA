#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    while(gets(a))
    {

        if(strcmp(a,"0 1 1")==0||strcmp(a,"1 0 0")==0)
            printf("A");
        else if(strcmp(a,"1 0 1")==0||strcmp(a,"0 1 0")==0)
            printf("B");
        else if(strcmp(a,"1 1 0")==0||strcmp(a,"0 0 1")==0)
            printf("C");
        else
            printf("*");
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,l;
    char n[7];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",n);
        l=strlen(n);
        if(l==3)
        {
           if((n[0]=='o'&&n[1]=='n')||(n[0]=='o'&&n[2]=='e')||(n[1]=='n'&&n[2]=='e'))
           printf("1\n");
           else
           printf("2\n");
        }
        else
        {
            printf("3\n");
        }

        }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char num[10500];
    int a,b,i;
    while(scanf("%s",num)==1)
    {

        if(strcmp(num,"0")==0)break;
        a=strlen(num);
        b=0;
        for(i=0;i<a;i++)
        {
            b=(b*10)+num[i]-'0';
            b=b%17;
        }
        if(b==0&&a==1)break;
        else if(b==0)printf("1\n");
        else printf("0\n");

    }
return 0;

}


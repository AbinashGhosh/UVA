#include<stdio.h>
#include<string.h>
int main()
{
    char num[1050];
    int a,b,i;
    while(scanf("%s",num)==1)
    {


        a=strlen(num);
        b=0;
        for(i=0;i<a;i++)
        {
            b=(b*10)+num[i]-'0';
            b=b%11;
        }
        if(b==0&&a==1)break;
        else if(b==0)printf("%s is a multiple of 11.\n",num);
        else printf("%s is not a multiple of 11.\n",num);

    }
return 0;
}


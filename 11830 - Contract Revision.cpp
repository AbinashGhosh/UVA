#include<stdio.h>
#include<string.h>
int main()
{
    char str[1024];
    int d,i,ch;
    while(scanf("%d",&d))
    {
        if(d==0)break;
        getchar();
        scanf("%s",str);
        ch=0;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]-'0'==d)continue;
            if(str[i]!='0')
            {
                printf("%c",str[i]);
                ch=1;
            }
            else if(ch==1)
                printf("%c",str[i]);
        }
        if(ch==0)
            printf("0\n");
        else
            printf("\n");

    }
    return 0;
}

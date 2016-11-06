#include<stdio.h>
#include<string.h>
int ans[200];
char str[105];
int main()
{
    int i, store, pos,ch;
    while(gets(str))
    {
        if(str[0]=='0') break;
        pos = 199;
        for(i=strlen(str)-1; i>=0; i--)
        {
            store =ans[pos]+str[i]-'0';
            ans[pos--]=store%10;
            ans[pos]+=store/10;
        }
    }
    ch=0;
    for(i=0; i < 200; i++)
        if(ans[i]!=0||ch==1)
        {
            printf("%d",ans[i]);
            ch=1;
        }

    printf("\n");
    return 0;
}

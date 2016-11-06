#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,ans,count=0,s;
    char c,t[12];
    while(scanf("%d%c%d=%s",&a,&c,&b,t)==4)
    {
        if(t=="?")
        {
        s=0;
        }
        else
        {
            ans=atoi(t);

        if(c=='+')
        {
            if((a+b)==ans)count++;
        }
        else if(c=='-')
        {
            if((a-b)==ans)count++;
        }
        }

    }
    printf("%d\n",count);
    return 0;
}

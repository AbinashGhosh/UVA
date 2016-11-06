#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,sum=0,a;
    char r[]="report",d[]="donate",ch[12];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",ch);
        if(strcmp(ch,r)==0)
        {
            printf("%lld\n",sum);
        }
        else
        {
            scanf("%lld",&a);
            sum=sum+a;
        }
    }
    return 0;
}

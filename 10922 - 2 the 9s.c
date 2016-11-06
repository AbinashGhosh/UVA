#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum,l,count,k,ans;
    char ch[1005],o[5]="0";
    while(scanf("%s",ch)==1)
    {
        if(strcmp(ch,o)==0)
        break;
        l=strlen(ch);
        sum=0;
        for(i=0;i<l;i++)
        sum=sum+ch[i]-'0';
        if(sum%9==0)
        {
           count=1;
        while(sum>9)
        {
            k=sum;ans=0;
            while(k>0)
            {
                ans=ans+(k%10);
                k=k/10;
            }
            sum=ans;
            count++;
        }
        printf("%s is a multiple of 9 and has 9-degree %d.\n",ch,count);
        }
        else
        printf("%s is not a multiple of 9.\n",ch);

    }
    return 0;
}

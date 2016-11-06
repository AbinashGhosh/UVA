#include<stdio.h>
int main()
{
    int pc[13],pr[13],b,a=0,i,ans;
    while(scanf("%d",&b)==1)
    {
        if(b<0)break;
        for(i=1;i<=12;i++)
        scanf("%d",&pc[i]);
         for(i=0;i<12;i++)
        scanf("%d",&pr[i]);
        pc[0]=b;
        a++;
        printf("Case %d:\n",a);
        for(i=0;i<12;i++)
        {
            if(b>=pr[i])
            {
                printf("No problem! :D\n");
                b-=pr[i];
            }
            else
            {
                printf("No problem. :(\n");
            }
            b+=pc[i+1];
        }
    }
    return 0;
}

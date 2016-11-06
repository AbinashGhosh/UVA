#include<stdio.h>
int main()
{
    int n,k,p,t,i,ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        if(p>n)p=p%n;
        if(k+p<=n)
        ans=k+p;
        else
        ans=p-(n-k);

        printf("Case %d: %d\n",i,ans);

    }
    return 0;
}

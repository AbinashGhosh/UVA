#include<stdio.h>
int main()
{
    long long int t,n,num,i,j,ans;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        ans=0;
        scanf("%lld",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&num);
            if(ans<num)
            ans=num;
        }
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}

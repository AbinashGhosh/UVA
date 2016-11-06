#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX_N 1005
#define MAX_W 35
int n;
int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int cost[MAX_N+1];
int CAP;
int func(int i,int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=CAP)
        profit1=cost[i]+func(i+1,w+weight[i]);
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int T,k,p;
    scanf("%d",&T);
    while(T--)
    {

        scanf("%d",&n);
        for(k=1;k<=n;++k)
            scanf("%d%d\n",&cost[k],&weight[k]);
        scanf("%d",&p);
        int sum=0;
        for(k=1;k<=p;++k)
        {
             memset(dp,-1,sizeof(dp));
            scanf("%d",&CAP);
            sum+=func(1,0);
        }
        printf("%d\n",sum);

    }

    return 0;
}

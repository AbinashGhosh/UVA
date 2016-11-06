#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int weight[105],cost[105],CAP,N,dp[105][50005];
bool visit[105][50005];
int knapsack(int i,int w)
{
    if(i==N+1)return 0;
    if(visit[i][w]==true)return dp[i][w];
      visit[i][w]=true;
    int profit1=0,profit2=0;
    if(w+weight[i]<=CAP)
        profit1=cost[i]+knapsack(i+1,w+weight[i]);
    profit2=knapsack(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int T,ans,sum,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        sum=0;
        memset(visit,false,sizeof(visit));
        for(i=1;i<=N;++i)
        {
            scanf("%d",&cost[i]);
            weight[i]=cost[i];
            sum+=cost[i];
        }
        CAP=sum/2;
        ans=knapsack(1,0);
        printf("%d\n",(sum-ans)-ans);
    }
    return 0;
}

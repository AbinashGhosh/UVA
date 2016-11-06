#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int weight[22],cost[22],CAP,N,dp[22][200005];
bool visit[22][2000005];
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
    char ch;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;N=1;
        memset(visit,false,sizeof(visit));
        while(scanf("%d%c",&cost[N],&ch))
        {
            weight[N]=cost[N];
            sum+=cost[N];
            if(ch=='\n')break;
            N++;
        }
        CAP=sum/2;
        ans=sum-2*(knapsack(1,0));
        if(ans==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}


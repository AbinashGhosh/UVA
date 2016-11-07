using namespace std;
#include<bits/stdc++.h>

#define mxn 500
int ourVal[mxn], dp[10003] = {0};
void pre_cal()
{
    int i = 0;
    ourVal[i] = i;
    while(ourVal[i] <= 10000)
    {
        i = i + 1;
        ourVal[i] = i * i;
    }
}
void dp_soln()
{
    dp[0] = 1;
    for(int x = 1; x < 101; x++)
    {
        for(int y = ourVal[x]; y <= 10000; y++)
            dp[y] =min( dp[y] ,1+dp[y - ourVal[x]]);
    }
}
//int solve(int n)
//{
//    if(n==0)return 0;
//    if(n<0)return 2000000;
//    if(dp[n]!=-1)return dp[n];
//    int res=100000000;
//    for(int i=1;i<=100;i++)
//    {
//        res=min(res,1+solve(n-ourVal[i]));
//    }
//    return dp[n]=res;
//}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE
    memset(dp, 0, sizeof dp );
    pre_cal();
//    dp_soln();
    int cnum; scanf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        int n; scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}

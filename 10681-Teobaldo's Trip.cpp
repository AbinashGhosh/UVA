//Abinash Ghosh(Om)
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>
using  namespace  std;

#define PI acos(-1.0)
#define MAX 10000007
#define EPS 1e-9
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

typedef  long long ll;
typedef  pair <int, int> pii;
typedef  pair <double , double> pdd;
typedef  pair <ll , ll > pll;
typedef  vector <int> vi;
typedef  vector <pii> vpii;
typedef  vector <ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
vi g[102];
int s,e,d;
int dp[102][202];
int solve(int u,int t)
{
    if(dp[u][t]!=-1)return dp[u][t];
    if(t==1)
    {
        FOR(i,0,(int)g[u].size()-1)
        if(g[u][i]==e)
            return 1;
        return 0;
    }
    if(t==0)
    {
        if(s==e)return 1;
        else 0;
    }
    int ans=0;
    FOR(i,0,(int)g[u].size()-1)
    {
        ans+=solve(g[u][i],t-1);
    }
    if(ans>0)dp[u][t]=1;
    else dp[u][t]=0;
    //printf("%d\n",ans);
    return dp[u][t];
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int L,C,a,b;
    while(scanf("%d%d",&C,&L)==2)
    {
        if(L==0&&C==0)break;
        FOR(i,1,101)g[i].clear();
        FOR(i,1,L)
        {
            scanf("%d%d",&a,&b);
            g[a].pb(b);
            g[b].pb(a);
        }
        //FOR(i,1,C)printf("%d\n",(int)g[i].size());
        mem(dp,-1);
        scanf("%d%d%d",&s,&e,&d);
        int ans=solve(s,d);
        if(ans>0)
            printf("Yes, Teobaldo can travel.\n");
        else
            printf("No, Teobaldo can not travel.\n");
    }
    return 0;
}


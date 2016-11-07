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

long long c,s,e,t,a;
long long g[102][102];
long long last[102];
long long dp[102][1002];
long long solve(long long u,long long d)
{
    if(d==0)return 0;
    if(dp[u][d]!=-1)return dp[u][d];
    if(d==1)
    {
        long long mx=-1000000000000;
        FOR(i,1,c)
          if(last[i])
            mx=max(mx,g[u][i]);
        return dp[u][d]=mx;
    }
    long long ans=-1000000000000;
    FOR(i,1,c)
    {
        ans=max(ans,g[u][i]+solve(i,d-1));
    }
    return dp[u][d]=ans;
}
int main()
{
   // READ("in.txt");
    //WRITE("out.txt");
    while(scanf("%lld%lld%lld%lld",&c,&s,&e,&t))
    {
        if(c==0&&e==0&&s==0&&t==0) break;
        FOR(i,1,c)
           FOR(j,1,c)
             scanf("%lld",&g[i][j]);
        mem(last,0);
        mem(dp,-1);
        FOR(i,1,e)
        {
            scanf("%lld",&a);
            last[a]=1;
        }
        long long ans=solve(s,t);
        printf("%lld\n",ans);
    }
    return 0;
}


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
int m,c;
vi val[22];
int dp[205][22];
int solve(int n,int b)
{
    if(n<0)return -100000;
    if(b==0) return m-n;
    if(dp[n][b]!=-1)return dp[n][b];
    int ans=-100000;
    for(int i=0;i<(int)val[b].size();i++)
    {
        ans=max(ans,solve(n-val[b][i],b-1));
    }
    return dp[n][b]=ans;

}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,k,sd;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&m,&c);
        FOR(i,1,c)
        {
            scanf("%d",&k);
            FOR(j,1,k)
            {
                scanf("%d",&sd);
                val[i].pb(sd);
            }
        }
        mem(dp,-1);
        int ans=solve(m,c);
        if(ans<0)printf("no solution\n");
        else printf("%d\n",ans);
         FOR(i,1,c)val[i].clear();
    }
    return 0;
}


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
#include <ctime>
#include <cassert>
using  namespace  std;

#define PI acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define FORR(i, b, e) for(int i = b; i >= e; i--)
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
//ll powmod(ll a,ll b) {ll res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
//ll powmod(ll a,ll b,ll mod) {ll res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

#define MAX 100007
#define EPS 1e-9
bool vis[MAX];
vi edge[MAX], topS;
void dfs_visit(int u)
{
    vis[u]=1;
    for(int i=0; i<(int)edge[u].size(); i++)
    {
        int v=edge[u][i];
        if(!vis[v])dfs_visit(v);
    }
    topS.pb(u);
}
int topsort(int node)
{
    mem(vis,0);
    topS.clear();
    for(int i=0; i<node; i++)
        if(!vis[i])dfs_visit(i);
    reverse(topS.begin(),topS.end());
    mem(vis,0);
    int c=0;
    FOR(i,0,(int)topS.size()-1)
    if(!vis[topS[i]])
    {
        dfs_visit(topS[i]);
        c++;
    }
    return c;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T;
    int a,b,node,edges;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&node,&edges);
        for(int i=0; i<edges; i++)
        {
            scanf("%d %d",&a,&b);
            edge[a-1].pb(b-1);
        }
        printf("%d\n",t,topsort(node));
        FOR(i,0,node-1)
        edge[i].clear();
    }
    return 0;
}


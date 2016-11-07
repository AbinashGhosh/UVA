/*
Algorithm: BFS/DFS
There is an unlimited supply of commando troops for the mission, so we can assign one commando
for destroying one building. So, the i'th commando have to:
1. Start from the building s and go to the i'th building
2. From the i'th building, go to building d
So, we have to calculate (shortest path from s to i) + (shortest path from d to i)
for all commandos, and find the maximum value among these.
*/
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
vi g[110];
int vis[110][2];
void bfs(int src,int k)
{
    queue<int > Q;
    Q.push(src);
    vis[src][k]=0;
    int u,v;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            v=g[u][i];
            if(vis[v][k]==-1)
            {
                Q.push(v);
                vis[v][k]=vis[u][k]+1;
            }
        }
    }
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,n,r,u,v,s,d;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&n,&r);
        FOR(i,1,r)
        {
            scanf("%d%d",&u,&v);
            g[u].pb(v);
            g[v].pb(u);
        }
        mem(vis,-1);
        scanf("%d%d",&s,&d);
        bfs(s,0);
        bfs(d,1);
        int ans=0;
        FOR(i,0,n-1)
        {
            ans=max(ans,vis[i][0]+vis[i][1]);
        }
        printf("Case %d: %d\n",t,ans);
        FOR(i,0,n-1)
        g[i].clear();
    }
    return 0;
}

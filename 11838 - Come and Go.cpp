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
#define MAX 2007
#define EPS 1e-9
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= (int)(e); i++)
#define FORR(i, b, e) for(int i = b; i >= (int)(e); i--)
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

vi edge[MAX],redge[MAX],NL;
int vis[MAX],com[MAX];
void dfs(int u)
{
    vis[u]=1;
    FOR(i,0,edge[u].size()-1)
    if(!vis[edge[u][i] ])
        dfs(edge[u][i]);
    NL.pb(u);
}
void dfsr(int u,int comid)
{
    vis[u]=0;
    com[u]=comid;
    FOR(i,0,redge[u].size()-1)
    if(vis[redge[u][i] ])
        dfsr(redge[u][i],comid);
}
int SCCom(int nodes)
{
    mem(vis,0);
    NL.clear();
    FOR(i,0,nodes-1)
    if(!vis[i])
        dfs(i);
    int comid=0;
    FORR(i,NL.size()-1,0)
    if(vis[NL[i]])
        dfsr(NL[i],++comid);
    if(comid>1)comid=0;
    return comid;
}
int main()
{
    //READ("SCC.txt");
    //WRITE("out.txt");
    int nodes,edges,u,v,p;
    while(1)
    {
        scanf("%d%d",&nodes,&edges);
        if(nodes==0&&edges==0)break;
        FOR(e,1,edges)
        {
            scanf("%d%d%d",&u,&v,&p);
            edge[u-1].pb(v-1);
            redge[v-1].pb(u-1);
            if(p==2)
            {
                swap(u,v);
                edge[u-1].pb(v-1);
                redge[v-1].pb(u-1);
            }
        }
        printf("%d\n",SCCom(nodes));
        FOR(i,0,nodes-1)
        {
            edge[i].clear();
            redge[i].clear();
        }
    }

    return 0;
}





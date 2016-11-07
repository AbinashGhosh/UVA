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

#define MAX 20005
#define EPS 1e-9

struct node{
    int u,w;
    node(int a,int b){
        u=a,w=b;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};
vi edge[MAX];
vi cost[MAX];
int d[MAX];
void dijkstra(int s)
{
    priority_queue<node>Q;
    mem(d,63);
    d[s]=0;
    Q.push(node(s,0));
    while(!Q.empty())
    {
        node top=Q.top();Q.pop();
        int u=top.u;
        FOR(i,0,(int)edge[u].size()-1)
        {
            int v=edge[u][i];
            if(d[v]>d[u]+cost[u][i])
            {
                d[v]=d[u]+cost[u][i];
                Q.push(node(v,d[v]));
            }
        }
    }
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int nodes,edges,T,source,dest,u,v,w;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&nodes,&edges);
        scanf("%d%d",&source,&dest);
        FOR(i,1,edges)
        {
            scanf("%d%d%d",&u,&v,&w);
            edge[u].pb(v);
            cost[u].pb(w);
            edge[v].pb(u);
            cost[v].pb(w);
        }
        dijkstra(source);
        if(d[dest]>10000*50005)
        printf("Case #%d: unreachable\n",t);
        else
        printf("Case #%d: %d\n",t,d[dest]);
        FOR(i,0,nodes-1)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}



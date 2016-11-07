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
// scanf("%d",&n);
vi edge[2505];
int  ed[2505][2505],last,val[25005];
bool vis[2505];
void BFS(int s)
{
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if(vis[u])continue;
        vis[u]=true;
        FOR(i,0,(int)edge[u].size()-1)
        {
           int v=edge[u][i];
            if(!vis[v])
            {
                ed[u][v]=val[last++];
                Q.push(v);
            }
        }
    }
}
int main()
{
    //READ("inA.txt");
    //WRITE("outA.txt");
    int T,n,m,s,u,v,w;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        vpii res;
        scanf("%d%d%d",&n,&m,&s);
        FOR(i,0,m-1)
        {
            scanf("%d%d%d",&u,&v,&w);
            edge[u].pb(v);
            edge[v].pb(u);
            res.pb(mp(u,v));
            val[i]=w;
        }
        FOR(i,1,n)sort(edge[i].begin(),edge[i].end());
        sort(val,val+m);
        last=0;
        mem(vis,false);
        mem(ed,-1);
        BFS(s);
        last=m-1;
        printf("Case %d:\n",t);
        FOR(i,0,m-1)
        {
            u=res[i].x,v=res[i].y;
            if(ed[u][v]>0)w=ed[u][v];
            else if(ed[v][u]>0)w=ed[v][u];
            else w=val[last--];
            printf("%d %d %d\n",u,v,w);
        }
        res.clear();
        FOR(i,0,n)edge[i].clear();
    }
    return 0;
}



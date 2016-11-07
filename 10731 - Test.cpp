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
#define MAX 30
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

map<int ,int >M;
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
    return comid;
}
int m[30];
vi res[30];
int main()
{
    //READ("SCC.txt");
    //WRITE("out10731.txt");
    int nodes,edges,u,v,T=0;
    char a,b;
    while(scanf("%d",&nodes)){


        if(nodes==0)break;        if(T)printf("\n");T++;
    mem(m,0);
    int p[10];
    FOR(i,1,nodes)
    {
        FOR(e,1,5)
        {
            getchar();
            scanf("%c",&b);
            p[e]=b-'A';
            m[p[e]]=1;
        }
        getchar();
        u=getchar();
        u-='A';
        m[u]=1;
        FOR(e,1,5)
        {
            v=p[e];
            edge[u].pb(v);
            redge[v].pb(u);
        }
    }
    SCCom(26);
    int bb=0,pre;
    FOR(i,0,26)
    if(m[i]){
       if(M.count(com[i])==0)
       M[com[i]]=bb++;
       //printf("%d ",M[com[i]]);
       res[M[com[i]]].pb(i);
    }
    FOR(j,0,bb-1)
    {
        FOR(i,0,(int)res[j].size()-1)
        {
            if(i!=0)printf(" ");
            printf("%c",res[j][i]+'A');
        }
        printf("\n");
    }
    FOR(i,0,26){
        edge[i].clear();
        redge[i].clear();
        res[i].clear();
    }
    M.clear();
    }

    return 0;
}

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

vi edge[MAX];
int vis[105],dis[105],low[105],t,cp,cut[105];
void AP(int u,int par=-1)
{
    int child=0,i,v;
    vis[u]=1;
    dis[u]=low[u]=++t;
    for(i=0;i<edge[u].size();++i)
    {
        v=edge[u][i];
        if(v==par)continue;
        if(vis[v])
            low[u]=min(low[u],dis[v]);
        else
        {
            child++;
            AP(v,u);
            low[u]=min(low[u],low[v]);
            if(low[v]>=dis[u])
            {
                cut[u]=1;
            }
        }
    }

    if(par==-1)cut[u]=(child>1);
}
int main()
{
    //READ("in.txt");
    int N,n1,n2;
    char ch;
    while(scanf("%d",&N)==1)
    {
        if(N==0)break;
        cp=0;t=0;
        while(scanf("%d",&n1)==1)
        {
            if(n1==0)break;
            while(scanf("%d%c",&n2,&ch)==2)
            {

                edge[n1].pb(n2);
                edge[n2].pb(n1);
                if(ch=='\n')break;
            }
        }
        mem(vis,0);
        mem(cut,0);
        AP(1);
        for(int i=1; i<=N; ++i)
        {
           if(cut[i]==1)
            cp++;
             edge[i].clear();
        }

        printf("%d\n",cp);

    }
    return 0;
}




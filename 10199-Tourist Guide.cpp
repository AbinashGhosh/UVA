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
using namespace std;

#define PI acos(-1.0)
#define MAX 10000007
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define READ(f) freopen(f, "r", stdin)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll , ll > pll;
typedef vector<int> vi;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
map<string,int> mp;
map<int,string> mp1;
vi edge[105];
vector <string>camera;
int vis[105],dis[105],low[105],cut[105],t,cmr;
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
    //READ("TG.txt");
    int N,edges,cas=0;
    string str,str1;
    while(scanf("%d",&N)==1)
    {
        if(N==0)break;
       getchar();
        t=0;
        FOR(i,1,N)
        {
            cin>>str;
            mp[str]=i;
            mp1[i]=str;
        }
        scanf("%d",&edges);
        FOR(i,1,edges)
        {
            cin>>str>>str1;
            edge[mp[str]].pb(mp[str1]);
            edge[mp[str1]].pb(mp[str]);
        }
        mem(vis,0);
        mem(cut,0);
        FOR(i,1,N)
        {
            if(vis[i]==0)
            AP(i);
        }


        for(int i=1; i<=N; ++i)
        {
                edge[i].clear();
                if(cut[i]==1)
             camera.pb(mp1[i]);
        }
        mp.clear();
        mp1.clear();
        Sort(camera);
        cmr=camera.size();
        if(cas>0)puts("");
        printf("City map #%d: %d camera(s) found\n",++cas,cmr);
        FOR(j,0,cmr-1)
        cout<<camera[j]<<"\n";
        camera.clear();
    }
    return 0;
}





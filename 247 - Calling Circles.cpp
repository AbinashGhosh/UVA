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

#define MAX 30
#define EPS 1e-9

map<string,int>M;
map<int,string>MM;

vi edge[MAX],redge[MAX],NL;
int vis[MAX],com[MAX];
void dfs(int u)
{
    vis[u]=1;
    FOR(i,0,(int)edge[u].size()-1)
        if(!vis[edge[u][i] ])
            dfs(edge[u][i]);
    NL.pb(u);
}
void dfsr(int u,int comid)
{
    vis[u]=0;
    com[u]=comid;
    FOR(i,0,(int)redge[u].size()-1)
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

int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T=1,node,edges;
    char str[31];
    char str1[31];
    string s;
    string s1;
    while(scanf("%d %d",&node,&edges))
    {

        string ans[27];
        if(node==0&&edges==0)break;
        if(T!=1)printf("\n");
        getchar();

        //pr2(node,edges);
        int k=0;
        FOR(i,1,edges)
        {
            scanf("%s%s",str,str1);
            s=str;
            s1=str1;
            if(M.count(s)==0){MM[k]=s;   M[s]=k++;}
            if(M.count(s1)==0){MM[k]=s1; M[s1]=k++;}
            edge[M[s] ].pb(M[s1] );
            redge[M[s1] ].pb(M[s] );
        }
        int cc=SCCom(node);
        FOR(i,0,node-1)
        {
            string temp=MM[i];
            int comp=com[i];
            if(ans[comp].size()==0)ans[comp]=temp;
            else ans[comp]+=(", "+temp);
        }
        printf("Calling circles for data set %d:\n",T++);
        FOR(i,1,cc)
        printf("%s\n",ans[i].c_str());
        FOR(i,0,node-1){
        edge[i].clear();
        redge[i].clear();
        }
        M.clear();
        MM.clear();
    }
    return 0;
}

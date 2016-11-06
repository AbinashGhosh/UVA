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
#define EPS 1e-9
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define READ(f) freopen(f, "r", stdin)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double,double> pdd;
typedef pair<ll , ll > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

map<string,int>citynum;
vector<int>edge[1000];
int dist[1000],parent[1000];
void reset()
{
    citynum.clear();
    for(int i=0;i<1000;i++)
    {
         edge[i].clear();
         dist[i]=-1;
         parent[i]=i;
    }
}
void BFS(int start,int end)
{
    queue<int>Q;
    Q.push(start);
    dist[start]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if(u==end)return;
        for(int i=0;i<edge[u].size();i++)
        {
            if(dist[edge[u][i]]==-1)
            {
                Q.push(edge[u][i]);
                parent[edge[u][i]]=u;
                dist[edge[u][i]]=dist[u]+1;
            }
        }
    }
}
void path(int end)
{
    vector<int>path;
    path.push_back(end);
    while(parent[end]!=end)
    {
        end=parent[end];
        path.push_back(end);
    }
    reverse(path.begin(),path.end());
    string str[1000];
    map<string,int>::iterator it;
    for(it=citynum.begin();it!=citynum.end();it++)
    {
        str[(*it).second]=(*it).first;
    }
    for(int i=1;i<path.size();i++)
    cout<<str[path[i-1]]<<" "<<str[path[i]]<<"\n";

}
int main()
{
    int i,j,node,edges,source,loop,u,v,numedge,k=0;
    while(scanf("%d",&numedge)!=EOF)
    {
        reset();
        char city1[4],city2[4];
        int city=1;
        while(numedge--)
        {
        scanf("%s %s",&city1,&city2);
        if(!citynum[city1])citynum[city1]=city++;
        if(!citynum[city2])citynum[city2]=city++;
        edge[citynum[city1]].push_back(citynum[city2]);
        edge[citynum[city2]].push_back(citynum[city1]);
        }
        scanf("%s %s",&city1,&city2);
        BFS(citynum[city1],citynum[city2]);
        if(k==1)printf ("\n");k=1;
        if(!citynum[city1]||!citynum[city2]||dist[citynum[city2]]==-1)
            printf("No route\n");
        else
            path(citynum[city2]);
    }
    return 0;
}

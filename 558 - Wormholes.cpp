#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <list>
#include <set>
#include <utility>
#include <sstream>
#include<iomanip>

#define PI acos(-1.0)
#define MAX 10000007
#define M 1005
#define ll long long
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define READ(f) freopen(f, "r", stdin)
using namespace std;
struct edge
{
    int u,v,w;
    edge(int U,int V,int W)
    {
        u=U,v=V,w=W;
    }
};
int nodes,edgenum,dis[M];
vector<edge>edges;
bool BellmanFord(int s)
{
    for(int i=1;i<=nodes;++i)
        dis[i]=MAX;
    dis[s]=0;
    for(int i=1;i<=nodes-1;++i)
        for(int j=0;j<edges.size();++j)
        {
            edge e=edges[j];
            if(dis[e.v]>dis[e.u]+e.w)
                dis[e.v]=dis[e.u]+e.w;
        }
    for(int j=0;j<edges.size();++j)
    {
        edge e=edges[j];
        if(dis[e.v]>dis[e.u]+e.w)
            return false;
    }
    return true;
}
int main()
{
    int T,u,v,w;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&nodes,&edgenum);
        int i=edgenum;
        while(i--)
        {
            scanf("%d%d%d",&u,&v,&w);
            edges.pb(edge(u+1,v+1,w));
        }
        bool b =BellmanFord(1);
        if(b)
            printf("not possible\n");
        else
            printf("possible\n");
        edges.clear();
    }
    return 0;
}

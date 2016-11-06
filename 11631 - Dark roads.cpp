#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define SIZE 200001
struct data
{
    int cost,node;
    bool operator<(const data& p)const
    {
        return cost>p.cost;
    }
};
vector<data>adj[SIZE];
int Prims(vector<data>adj[],int source,int nodes)
{
    priority_queue<data>Q;
    vector<int>color(nodes+1);
    data U,V;
    int i,sum;

    V.node=source;
    sum=V.cost=0;
    Q.push(V);
    while(!Q.empty())
    {
        U=Q.top();
        if(color[U.node]==0)
        {
            sum+=U.cost;
        }
        color[U.node]=1;
        Q.pop();
        for(i=0; i<adj[U.node].size(); i++)
        {
            if(color[ adj[U.node][i].node]==0)
            {
                V.node=adj[U.node][i].node;
                V.cost=adj[U.node][i].cost;
                Q.push(V);
            }
        }
    }
    return sum;
}

int main()
{
    long int nodes,edges,i,u,v,cost,source,val,ncost;
    data V;
    while(scanf("%ld %ld",&nodes,&edges)==2)
    {
        if(nodes==0&&edges==0)break;
        ncost=0;
        for(i=0; i<edges; i++)
        {
            scanf("%ld %ld %ld",&u,&v,&cost);
            ncost+=cost;
            V.cost=cost;
            V.node=v;
            adj[u].push_back(V);
            V.node=u;
            adj[v].push_back(V);
        }
        val=Prims(adj,1,nodes);
        printf("%ld\n",ncost-val);
        for(i=0;i<200000;i++)
            adj[i].clear();
    }
    return 0;
}


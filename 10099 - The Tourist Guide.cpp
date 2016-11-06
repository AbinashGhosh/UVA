#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define SIZE 105
struct data
{
    long int cost,node;
    bool operator<(const data& p)const
    {
        return cost<p.cost;
    }
};
vector<data>adj[SIZE];
long int Prims(vector<data>adj[],long int source,long int dista,long int nodes,long int ncost)
{
    priority_queue<data>Q;
    vector<int>color(nodes+1);
    data U,V;
    long int i,sum=ncost+1;

    V.node=source;
    V.cost=0;
    Q.push(V);
    while(!Q.empty())
    {
        U=Q.top();
        if(sum>U.cost&&U.cost!=0)
            sum=U.cost;
        if(U.node==dista)break;
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
    long int nodes,edges,i,u,v,cost,source,val,ncost,cas=1,sourc,dista,num;
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
        scanf("%ld%ld%ld",&sourc,&dista,&num);
        val=Prims(adj,sourc,dista,nodes,ncost);
        val=(num/(val-1))+(num%(val-1)!=0);
        printf("Scenario #%ld\nMinimum Number of Trips = %ld\n\n",cas++,val);
        for(i=0;i<105;i++)
            adj[i].clear();
    }
    return 0;
}


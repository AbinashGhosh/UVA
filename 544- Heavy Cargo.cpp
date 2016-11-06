#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <queue>
#include <iostream>
#include <string>
#include <map>
using namespace std;
#define SIZE 10000
map<string,int>citynum;
struct data
{
    int cost,node;
    bool operator<(const data& p)const
    {
        return cost<p.cost;
    }
};
int main()
{
    int nodes,edges,i,cost,val,result,city,cas=1;
    string u,v,source,distan;
    data V,U;
    while(scanf("%d%d",&nodes,&edges)==2)
    {
        if(nodes==0&&edges==0)break;
        city=1;
        vector<int>dist;
        vector<data>adj[SIZE];

        for(i=0; i<edges; i++)
        {
            cin>>u>>v;
           if(!citynum[u])citynum[u]=city++;
           if(!citynum[v])citynum[v]=city++;
            scanf("%d",&cost);
            V.cost=cost;
            V.node=citynum[v];
            adj[citynum[u]].push_back(V);
            V.node=citynum[u];
            adj[citynum[v]].push_back(V);
        }
        cin>>source>>distan;
        priority_queue<data>Q;
        vector<int>color(nodes+1);
        V.node=citynum[source];
        V.cost=0;
        Q.push(V);
        result=19901;
        while(!Q.empty())
        {
            U=Q.top();
            if(U.cost<result&&U.cost!=0)
                result=U.cost;
            if(U.node==citynum[distan])break;
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
        printf("Scenario #%d\n%d tons\n\n",cas++,result);
    }
    return 0;
}


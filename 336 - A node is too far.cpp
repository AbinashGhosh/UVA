#include<iostream>
#include<vector>
#include<cstdio>
#define MAX 100000
using namespace std;
    vector<int> edge[MAX];
int main()
{
    int i,j,node,edges,n1,n2,source,loop,u,v,level,Case=1;
    while(scanf("%d",&edges))
    {
        if(edges==0)break;

    int in[MAX]={0},out[MAX]={0};
    for(i=1;i<=edges;i++)
    {
        scanf("%d%d",&n1,&n2);
        edge[n1].push_back(n2);
        edge[n2].push_back(n1);
    }
    while(scanf("%d%d",&source,&level))
    {
        if(source==0&&level==0)break;
    vector<int>V1,V2;
    int taken[100]={0};
    taken[source]=1;
    V1.push_back(source);
    node=0;
    for(loop=1;;loop++)
    {
        for(i=0;i<V1.size();i++)
        {
            u=V1[i];
            for(j=0;j<edge[u].size();j++)
            {
                v=edge[u][j];
                if(!taken[v])
                {
                    V2.push_back(v);
                    taken[v]=1;
                }
            }
        }
        if(loop>level+1)
        node=node+V1.size();
        if(V2.empty())
        break;
        else
        {
            V1.clear();
            V1=V2;
            V2.clear();
        }
    }
    printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",Case++,node,source,level);
    }
    for(i=1;i<=edges;i++)
    edge[i].clear();
    }
    return 0;
}

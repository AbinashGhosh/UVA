#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#define MAX 205
using namespace std;
int main()
{
    int i,j,node,edges,n1,n2,source,loop,u,v,max;
    while(scanf("%d",&node)==1)
    {
        if(node==0)break;
        vector<int> edge[MAX];
        scanf("%d",&edges);
        for(i=1; i<=edges; i++)
        {
            scanf("%d%d",&n1,&n2);
            edge[n1].push_back(n2);
            edge[n2].push_back(n1);
        }
        source =n1;
        queue<int>Q;
        Q.push(source);
        int taken[205],colour[205];
        for(i=0; i<=node; i++)
            taken[i]=colour[i]=0;
        taken[source]=1;
        colour[source]=1;
        int br=0;
        while(!Q.empty())
        {
            u=Q.front();
            for(i=0; i<edge[u].size(); i++)
            {
                v=edge[u][i];
                if(colour[u]==colour[v])
                {
                    br=1;
                    break;
                }
                if(taken[v]==0)
                {
                    Q.push(v);
                    taken[v]=1;
                    colour[v]=3-colour[u];

                }


            }
            Q.pop();
        }
        if(br==0)
            {

            }
        else
            printf("NOT BICOLORABLE.\n");

    }
    return 0;
}

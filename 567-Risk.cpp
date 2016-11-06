#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
vector<int> edge[25];
int dist;
int bfs(int src , int search)
{
    int u,v;
    queue<int>Q;
    Q.push(src);
    int taken[25]= {0},dis[25]={0};
    taken[src]=1;
    dis[src]=0;
    while(!Q.empty())
    {
        u=Q.front();
        for(int i=0; i<edge[u].size(); i++)
        {
            v=edge[u][i];
            if(!taken[v])
            {
                Q.push(v);
                taken[v]=1;
                dis[v]=dis[u]+1;
                if(v==search)
                {
                    dist=dis[search];
                    return dis[search];
                }
            }
        }
        Q.pop();
    }

}
int main()
{
    int i,j,k,non,node,N,A,B,cas=1;
    while(scanf("%d",&non)==1)
    {
        for(i=1; i<20; i++)
        {
            if(i!=1)
                scanf("%d",&non);
            for(j=0; j<non; j++)
            {
                scanf("%d",&node);
                edge[i].push_back(node);
                edge[node].push_back(i);
            }

        }
        scanf("%d",&N);
        printf("Test Set #%d\n",cas++);
        for(k=0; k<N; k++)
        {
            scanf("%d%d",&A,&B);
            bfs(A,B);
            printf("%2d to %2d: %d\n",A,B,dist);
        }
        for(i=1; i<=20; i++)
        edge[i].clear();
        printf("\n");
    }
    return 0;
}


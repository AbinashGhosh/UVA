#include<cstdio>
#include<cstring>
#include<vector>
#define M 27
using namespace std;
vector<int>edges[M];
int color[M],v,count;
void DFS_visit(int u)
{
    color[u]=1;
    for(int i=0;i<edges[u].size();++i)
    {
        v=edges[u][i];
        if(color[v]==0)
            DFS_visit(v);
    }
}
void DFS(int nodes)
{
    count=0;
    for(int i=1;i<=nodes;++i)
        color[i]=0;
    for(int i=1;i<=nodes;++i)
        if(color[i]==0)
          DFS_visit(i),count++;
}
int main()
{
    int T,nodes,n1,n2,i;
    char ch,dh;
    scanf("%d",&T);
    getchar();getchar();
    for(i=1;i<=T;++i)
    {
        scanf("%c",&ch);getchar();
        nodes=ch-64;
        while(scanf("%c",&ch)==1)
        {
            if(ch=='\n')break;
            scanf("%c",&dh);getchar();
            n1=ch-64;
            n2=dh-64;
            edges[n1].push_back(n2);
            edges[n2].push_back(n1);
        }
        DFS(nodes);
        if(i!=1)printf("\n");
        printf("%d\n",count);
        for(int j=1;j<=nodes;++j)
            edges[j].clear();

    }
    return 0;
}

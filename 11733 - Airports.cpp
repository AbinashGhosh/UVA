#include<cstdio>
#include<vector>
#include<algorithm>
#include <cstdlib>
#define M 10005
using namespace std;
struct  edge
{
    int u,v,w;
};
int cmp(const void*a,const void*b)
{
    return ((edge*)a)->w-((edge*)b)->w;
}
edge edges[100005];
int parent[M],air,bil;
int find_res(int r)
{
    return (parent[r]==r)?r:find_res(parent[r]);
}
int kruskal(int node,int ed)
{
    int i,u,v,s=0,count=0;
    qsort(edges,ed,sizeof(edge),&cmp);
    for(i=1;i<=node;++i)parent[i]=i;
    for(i=0;i<ed&&edges[i].w<bil;++i)
    {
        u=find_res(edges[i].u);
        v=find_res(edges[i].v);
        if(u!=v)
        {
            parent[u]=v;
            s+=edges[i].w;
            count++;
            if(count==node-1)break;
        }
    }
    air=0;
    for(i=1;i<=node;++i)
        if(parent[i]==i)air++;
    return s;
}
int main()
{
    int node,edgenum,i,u,v,w,minimum,res,T;
    edge get;
    scanf("%d",&T);
    for(int k=1;k<=T;++k)
    {
    scanf("%d%d%d",&node,&edgenum,&bil);
    for(i=0;i<edgenum;++i)
    {
        scanf("%d%d%d",&u,&v,&w);
        edges[i].u=u,edges[i].v=v,edges[i].w=w;
    }
    minimum=kruskal(node,edgenum);
    res=air*bil +minimum;
    printf("Case #%d: %d %d\n",k,res,air);
    }
    return 0;
}


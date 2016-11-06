#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
struct var
{
    int node,nodeval;
    bool operator<(const var&p)const
    {
        return nodeval<p.nodeval;
    }
};
int main()
{
    int T,node,edge,nodval[105],i,j,u,v,p,sum;
    scanf("%d",&T);
    for(i=1;i<=T;++i)
    {
        scanf("%d%d",&node,&edge);
        for( j=0;j<node;++j)
            scanf("%d",&nodval[j]);
        priority_queue<var>Q[node+1];
        var k;
        for(j=0;j<edge;++j)
        {
            scanf("%d%d",&u,&v);
            k.node=v; k.nodeval=nodval[v];
            Q[u].push(k);
        }
        p=0;sum=0;
        while(!Q[p].empty())
        {
            k=Q[p].top();
                sum+=k.nodeval;
                p=k.node;
        }
        printf("Case %d: %d %d\n",i,sum,p);


    }
    return 0;
}

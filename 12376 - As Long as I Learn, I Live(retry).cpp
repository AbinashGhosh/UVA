#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int T,node,edge,i,j,u,v,p,sum,s,w;
    vector<int>nodeval;
    scanf("%d",&T);
    for(i=1;i<=T;++i)
    {
        scanf("%d%d",&node,&edge);
        for( j=0;j<node;++j)
        {
            scanf("%d",&w);
            nodeval.push_back(w);
        }

        vector<int>Q[node+1];
        for(j=0;j<edge;++j)
        {
            scanf("%d%d",&u,&v);
            Q[u].push_back(v);
        }
        p=0;sum=0;
        while(Q[p].size()>0)
        {
                int maxe=0,s=-1;
                for(j=0;j<Q[p].size();++j)
                {
                    if(maxe<nodeval[Q[p][j]])
                    {
                        maxe=nodeval[Q[p][j]];
                        s=Q[p][j];
                    }
                }
                sum+=maxe;
                p=s;
        }
        printf("Case %d: %d %d\n",i,sum,p);
        for(j=0;j<=node;++j)Q[j].clear();
        nodeval.clear();

    }
    return 0;
}


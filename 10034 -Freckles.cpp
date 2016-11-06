#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <queue>
#include <math.h>
using namespace std;
#define SIZE 105
struct data
{
    int node;
    double cost;
    bool operator<(const data& p)const
    {
        return cost>p.cost;
    }
};
double distance(double x1,double y1,double x2, double y2)
{
    return sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
int main()
{
    int nodes,i,j,T;
    double p1[101],p2[101];
    data P;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&nodes);
        vector<data>adj[nodes+1];
        for(i=0; i<nodes; i++)
            scanf("%lf%lf",&p1[i],&p2[i]);

        for(i=0; i<nodes; i++)
        {
            for(j=i+1; j<nodes; j++)
            {
                P.cost = distance(p1[i],p2[i],p1[j],p2[j]);
                P.node=j;
                adj[i].push_back(P);
                P.node=i;
                adj[j].push_back(P);
            }
        }
        priority_queue<data>Q;
        vector<int>color(nodes+1);
        double sum;
        data U,V;
        V.node=0;
        sum=V.cost=0;
        Q.push(V);
        while(!Q.empty())
        {
            U=Q.top();
            Q.pop();

            if(color[U.node]==0)
                sum+=U.cost;
            color[U.node]=1;
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
        printf("%.2lf\n",sum);
        if(T!=0) printf("\n");
    }
    return 0;
}

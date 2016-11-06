#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <list>
#include <set>
#include <utility>
#include <sstream>
#include<iomanip>

#define PI acos(-1.0)
#define MAX 10000007
#define int64 long long
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define READ(f) freopen(f, "r", stdin)
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

using namespace std;
vector<int >edges[105];
vector<int >nodes;
int indgree[105],node,edge,ck;
void topsort()
{
    int j,k;
    for(j=1;j<=node;++j)
        if(indgree[j]==0){indgree[j]=-1;break;}
    if(j==node+1)return;
    //nodes.pb(j);
    if(ck!=0)printf(" ");
    printf("%d",j);
    ck=1;
    for(k=0;k<edges[j].size();++k)
        indgree[edges[j][k]]--;
    //for(int j=1;j<=node;++j)printf("%d ",indgree[j]);printf("\n");
    topsort();
}
int main()
{
    //READ("in.txt");
    int n1,n2;
    while(scanf("%d%d",&node,&edge)==2)
    {
        if(node==0&&edge==0)break;
        for(int j=1;j<=node;++j)indgree[j]=0;
        for(int i=1;i<=edge;++i)
        {
            scanf("%d%d",&n1,&n2);
            edges[n1].pb(n2);
            indgree[n2]++;
        }
        //for(int j=1;j<=node;++j)printf("%d ",indgree[j]);printf("\n");
        ck=0;
        topsort();
       // printf("%d",nodes[0]);
       // for(int i=1;i<nodes.size();++i)
        //    printf(" %d",nodes[i]);
        printf("\n");
        //nodes.clear();
        for(int j=1;j<=node;++j)edges[j].clear();
    }

    return 0;
}


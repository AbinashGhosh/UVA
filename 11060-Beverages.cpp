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
using namespace std;
vector<int >edges[205];
vector<int >nodes;

int indgree[205],node,edge;
void topsort()
{
    int j,k;
    for(j=1;j<=node;++j)
        if(indgree[j]==0){indgree[j]=-1;break;}
    if(j==node+1)return;
    nodes.pb(j);
    for(k=0;k<edges[j].size();++k)
        indgree[edges[j][k]]--;
    //for(int j=1;j<=node;++j)printf("%d ",indgree[j]);printf("\n");
    topsort();
}
int main()
{
    //READ("in.txt");

    int cas=0;
    string s1,s2,str[205];
    while(scanf("%d%*c",&node)!=EOF)
    {
        map<string,int>m;
        for(int j=1;j<=node;++j)indgree[j]=0;
        for(int j=1;j<=node;++j)
        {
            cin>>str[j];
            m[str[j]]=j;
        }
        scanf("%d%*c",&edge);
        for(int j=1;j<=edge;++j)
        {
            cin>>s1>>s2;
            edges[m[s1]].pb(m[s2]);
            indgree[m[s2]]++;
        }
        topsort();
        printf("Case #%d: Dilbert should drink beverages in this order:",++cas);
         for(int i=0;i<nodes.size();++i)
             cout<<" "<<str[nodes[i]];
         printf(".\n\n");
        nodes.clear();
        for(int j=1;j<=node;++j)edges[j].clear();
    }

    return 0;
}

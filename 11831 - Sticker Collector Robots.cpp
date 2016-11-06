#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <list>
#include <set>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <sstream>

using namespace std;

#define PI 3.141592653589793
#define INF 1000000007
#define MAX 100007
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define mem(a,b)    memset(a,b,sizeof(a))
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    (a*(b/gcd(a,b)))
#define pb push_back
int dx[]={-1, 0, 1, 0};
int dy[]={ 0, 1, 0,-1};
char g[105][105],ch;
int main()
{
    int r,c,n,d,ir,ic,tc,tr;
    while( scanf("%d%d%d",&r,&c,&n)==3)
    {
        int count=0;
        if(r==0&&c==0&&n==0)break;
        getchar();
        for(int i=1;i<=r;++i)
        {
            for(int j=1;j<=c;++j)
            {
                scanf("%c",&g[i][j]);
                if(g[i][j]=='N'||g[i][j]=='S'||g[i][j]=='L'||g[i][j]=='O')
                {
                    if(g[i][j]=='N')d=0;
                    else if(g[i][j]=='S')d=2;
                     else if(g[i][j]=='L')d=1;
                      else if(g[i][j]=='O')d=3;
                      ir=i,ic=j;
                      g[i][j]='.';
                }
            }
             getchar();
        }
        for(int i=1;i<=n;++i)
        {
            scanf("%c",&ch);
            if(ch=='D')d=(d+1)%4;
            else if(ch=='E')d=(d+3)%4;
            else if(ch=='F')
            {
                tr=ir+dx[d];
                tc=ic+dy[d];
                if(tr>0&&tr<=r&&tc>0&&tc<=c&&g[tr][tc]!='#')
                {
                    ir=tr,ic=tc;
                    if(g[tr][tc]=='*')
                       count++;g[tr][tc]='.';
                }
            }

        }
        printf("%d\n",count);
    }
     return 0;

}

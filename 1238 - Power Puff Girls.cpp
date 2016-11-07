/*
Algorithm : BFS
Solution : bfs from home , then maximam distance of a,b,c from home is ans.
*/
//Abinash Ghosh(Om)
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>
using  namespace  std;

#define PI acos(-1.0)
#define MAX 10000007
#define EPS 1e-9
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

typedef  long long ll;
typedef  pair <int, int> pii;
typedef  pair <double , double> pdd;
typedef  pair <ll , ll > pll;
typedef  vector <int> vi;
typedef  vector <pii> vpii;
typedef  vector <ll > vl;


int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
char  g[22][22];
int vis[22][22],r,c;
void bfs(int sr,int sc)
{
    queue<pii >Q;
    Q.push(mp(sr,sc));
    vis[sr][sc]=0;
    pii u,v;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        FOR(i,0,3)
        {
            v=mp(u.x+dx[i],u.y+dy[i]);
            if(v.x<r&&v.x>=0&&v.y<c&&v.y>=0&&g[v.x][v.y]!='#'&&g[v.x][v.y]!='m'&&vis[v.x][v.y]==-1)
            {
                Q.push(v);
                vis[v.x][v.y]=vis[u.x][u.y]+1;
            }
        }
    }
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,p[5][2];
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&r,&c);
        FOR(i,0,r-1){
            getchar();
        FOR(j,0,c-1)
        {
            scanf("%c",&g[i][j]);
            if(g[i][j]=='h')
            p[0][0]=i,p[0][1]=j;
            else if(g[i][j]=='a')
            p[1][0]=i,p[1][1]=j;
            else if(g[i][j]=='b')
            p[2][0]=i,p[2][1]=j;
            else if(g[i][j]=='c')
            p[3][0]=i,p[3][1]=j;
        }
        }
        mem(vis,-1);
        bfs(p[0][0],p[0][1]);
        int ans=0;
        FOR(i,1,3)
        {
            ans=max(ans,vis[p[i][0]][p[i][1]]);
            //pr2(p[i][0],p[i][1]);
        }
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}

/*
2
6 8
########
#...c..#
#......#
#.a.h.b#
#......#
########
5 9
#########
#mmm...c#
#ma.h####
#m....b.#
#########
*/

//Abinash Ghosh
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
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
#include <ctime>
#include <cassert>
#include <limits>
using  namespace  std;

#define PI acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define FORR(i, b, e) for(int i = b; i >= e; i--)
#define FORI(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define ppr(a) cout<<a.x<<" "<<a.y<<"\n"
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

#define MAX 100007
#define EPS 1e-9
char g[12][12];
int val[12][12];
int vis[12][12];
pii temp;
int bfs(pii source,int des,int n)
{
    queue<pii>Q;
    Q.push(source);
    val[source.x][source.y]=0;
    while(!Q.empty())
    {
        pii u=Q.front();Q.pop();
        FOR(i,0,3)
        {
            int a=u.x+dx[i];
            int b=u.y+dy[i];
            if(a>0&&a<=n&&b>0&&b<=n&&!vis[a][b])
            {
                if(g[a][b]=='.')
                {
                    val[a][b]=val[u.x][u.y]+1;
                    vis[a][b]=1;
                    Q.push(mp(a,b));
                }
                else if(g[a][b]==('A'+des))
                {
                    temp=mp(a,b);
                    return val[u.x][u.y]+1;
                }
            }
        }
    }
    return -1;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T,n;
    pii s;
    scanf("%d",&T);
    FOR(cs,1,T)
    {
        scanf("%d",&n);
        int mx=0;
        FOR(i,1,n)
        {
            getchar();
            FOR(j,1,n)
            {
                scanf("%c",&g[i][j]);
                if(g[i][j]=='A')s=mp(i,j);
                if(isalpha(g[i][j]))
                mx=max(mx,g[i][j]-'A');
            }
        }
        int ans=0;
        bool res=true;
        FOR(i,1,mx)
        {
            g[s.x][s.y]='.';
            mem(vis,0);
            mem(val,-1);
            int rr=bfs(s,i,n);
            if(rr!=-1)
            {
                ans+=rr;
                s=temp;
            }
            else{
                res=false;
                break;
            }
        }
        if(res)printf("Case %d: %d\n",cs,ans);
        else printf("Case %d: Impossible\n",cs);
    }
    return 0;
}
/*
4
5
A....
####.
..B..
.####
C.DE.
2
AC
.B
2
A#
#B
3
A.C
##.
B..
*/

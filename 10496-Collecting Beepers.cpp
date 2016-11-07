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
int x,y,sx,sy,b,p,q,v[22];
vpii beep;
int dp[22][22];
int g[22][22];
int solve(int i,int n)
{
   //if(dp[i][n]!=-1)return dp[i][n];
   if(n==0)
   {
       return g[i][0];
   }
   int ans=1000000000;
   v[i]=1;
   FOR(k,0,b)
   {
       if(!v[k])
       ans=min(ans,g[i][k]+solve(k,n-1));
   }
   //pr3(i,n,ans);
   v[i]=0;
   return dp[i][n]=ans;
}
  int   main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&x,&y);
        scanf("%d%d",&sx,&sy);
        scanf("%d",&b);
        mem(v,0);
        mem(dp,-1);
        beep.pb(mp(sx,sy));
        FOR(i,1,b)
        {
            scanf("%d%d",&p,&q);
            beep.pb(mp(p,q));
        }
        FOR(i,0,b)
        {
            FOR(j,i+1,b)
            {
                int dist=abs(beep[i].x-beep[j].x)+abs(beep[i].y-beep[j].y);
                g[i][j]=dist;
                g[j][i]=dist;
            }
        }
        int ans=solve(0,b);
        printf("The shortest path has length %d\n",ans);
        beep.clear();
    }
    return 0;
}


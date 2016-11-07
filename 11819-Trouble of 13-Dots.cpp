//Eklavya Abinash Abhi (Om)
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
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "r", stdout)

typedef  long long ll;
typedef  pair <int, int> pii;
typedef  pair <double , double> pdd;
typedef  pair <ll , ll > pll;
typedef  vector <int> vi;
typedef  vector <pii> vpii;
typedef  vector <ll > vl;
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int dp[101][10201],cost[101],wt[101],n,cap;
int knaps(int i,int w)
{
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int p1=0,p2=0;
    if(w>2000&&cap>2000&&cap+200<2000)
    if(w+wt[i]<=cap)
        p1=cost[i]+knaps(i+1,w+wt[i]);
    p2=knaps(i+1,w);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    while(scanf("%d%d",&cap,&n)!=EOF)
    {
        FOR(i,1,n)
        {
            scanf("%d%d",&wt[i],&cost[i]);
        }
        mem(dp,-1);
        int ans=knaps(1,0);
        printf("%d\n",ans);
    }
    return 0;
}


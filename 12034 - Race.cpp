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
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

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
#define M 10056
ll dp[1005];
int ncr[1005][1005];
void ncrcal(int n)
{
    FOR(i,0,n)ncr[i][0]=1;
    FOR(i,1,n)
    {
        FOR(j,1,i)
        {
            ncr[i][j]=(ncr[i-1][j-1]+ncr[i-1][j])%M;
        }
    }
}
ll solve(int n)
{
    if(n==0||n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    int ans=0;
    FOR(i,1,n)
    {
        ans=(ans+(ncr[n][i]*solve(n-i))%M)%M;
    }
    return dp[n]=ans;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    mem(dp,-1);
    ncrcal(1001);
    solve(1001);
    dp[1]=1;
    int T,n;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d",&n);
        printf("Case %d: %lld\n",t,dp[n]);
    }
    return 0;
}



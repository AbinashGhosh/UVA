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
char s[1005],r[1005];
int l,n;
int dp[1005][1005];
int solve(int i,int j)
{
    if(i>j) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i-1]==s[j-1])return dp[i][j]=solve(i+1,j-1);
    else
    return dp[i][j]=1+min(min(solve(i,j-1),solve(i+1,j)),solve(i+1,j-1));
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    scanf("%d\n",&n);
    FOR(t,1,n)
    {
        mem(dp,-1);
        scanf("%s",s);
        l=strlen(s);
        int ans=solve(1,l);
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}



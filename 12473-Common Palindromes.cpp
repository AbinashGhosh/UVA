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

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

char a[61],b[61],c[61];
int dp[65][65][65][65],l1,l2;
int solve(int i,int j,int k,int l)
{
    if(i>j||k>l)return 0;
    if(dp[i][j][k][l]!=-1)return dp[i][j][k][l];
    if(i==j&&k==l&&a[i]==b[k])return 1;
    if(i<j&&k<l&&a[i]==a[j]&&a[j]==b[k]&&b[k]==b[l])
        dp[i][j][k][l]=solve(i+1,j-1,k+1,l-1)+2;
    else
        dp[i][j][k][l]=max(max(solve(i+1,j,k,l),solve(i,j-1,k,l)),max(solve(i,j,k+1,l),solve(i,j,k,l-1)));
    return dp[i][j][k][l];
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    scanf("%d\n",&T);
    FOR(t,1,T)
    {
        mem(dp,-1);
        scanf("%s%s",&a,&b);
        l1=strlen(a);
        l2=strlen(b);
        int  ans=solve(0,l1-1,0,l2-1);
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}

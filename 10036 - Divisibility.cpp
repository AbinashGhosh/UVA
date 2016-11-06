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
int n,d,num[10005],dp[10002][102];
int solve(int pos,int mod)
{
    if(pos<0)
    {
        if(mod==0)return 1;
        return 0;
    }
    if(dp[pos][mod]!=-1)return dp[pos][mod];
    return dp[pos][mod]=solve(pos-1,((mod+num[pos])%d+d)%d)|solve(pos-1,((mod-num[pos])%d+d)%d);
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&d);
        mem(dp,-1);
        FOR(i,0,n-1)
        {
            scanf("%d",&num[i]);
        }
        int ans=solve(n-2,(num[n-1]%d+d)%d);
        if(ans)printf("Divisible\n");
        else printf("Not divisible\n");
    }
    return 0;
}


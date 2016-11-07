//Divisible Group Sums

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
int d,N;
int  val[202];
ll dp[201][11][21];
int solve(int idx,int cnt,int sum)
{

    //sum=(sum%d+d)%d;
    if(cnt==0)
    {
        if(sum==0)return 1;
        else return 0;
    }
    // pr3(idx,cnt,N);
    if(idx==N)return 0;
     //pr3(idx,cnt,sum+val[idx]);
    if(dp[idx][cnt][sum]!=-1)return dp[idx][cnt][sum];
    dp[idx][cnt][sum]=solve(idx+1,cnt-1,((sum+val[idx])%d+d)%d)+solve(idx+1,cnt,sum);
    return dp[idx][cnt][sum];
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int Q,m,t=1;
    while(scanf("%d%d",&N,&Q)==2)
    {
        if(N==0&&Q==0)break;
        FOR(i,0,N-1)
        scanf("%d",&val[i]);
        //mem(dp,-1);
        printf("SET %d:\n",t++);
        FOR(i,1,Q)
        {
            mem(dp,-1);
            scanf("%d%d",&d,&m);
            ll ans=solve(0,m,0);
            printf("QUERY %d: %d\n",i,ans);
        }
    }
    return 0;
}


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
int n,dp[1005],dir[1005],start;
struct seq
{
    int i,w,q;
    bool operator < ( const seq& p ) const
    {
        return w < p.w;
    }
};
seq s[1005];
int lpath(int u)
{
    if(dp[u]!=-1)return dp[u];
    int mx=0;
    FOR(i,u+1,n)
    {
        if(s[u].q>s[i].q&&s[u].w!=s[i].w)
        {
            if(lpath(i)>mx)
            {
                mx=lpath(i);
                dir[u]=i;
            }

        }
    }
    return dp[u]=1+mx;
}
ll LIS(int n)
{
    int mx=0;
    FOR(i,0,n)
    {
        if(lpath(i)>mx){
            mx=lpath(i);
            start=i;
        }
    }
    return mx;
}
void Seqnce(int d)
{
    while(d!=-1){
        printf("%d\n",s[d].i+1);
        d=dir[d];
    }
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int i=0,w,q;
    while(scanf("%d%d",&w,&q)!=EOF)
    {
        s[i].i=i;
        s[i].w=w;
        s[i].q=q;
        i++;
    }
    mem(dp,-1);
    mem(dir,-1);
    sort(s,s+i);
//    FOR(j,0,i-1)
//    pr2(s[j].w,s[j].q);
      n=i-1;
      ll ans=LIS(i-1);
      printf("%lld\n",ans);
      Seqnce(start);
    return 0;
}


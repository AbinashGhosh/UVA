
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

ll dp[53][53],f[55],l,cn;
ll scut(int s,int e)
{
    //pr2(s,e);
    //if(s+1==e){pr2(s,e);return 0;}
    if(dp[s][e]!=-1)return dp[s][e];
    ll mn=1000000000;
    FOR(i,s+1,e-1)
    {
        mn=min(mn,scut(s,i)+scut(i,e)+(f[e]-f[s]));
    }
    if(mn==1000000000)mn=0;
    return dp[s][e]=mn;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    while(scanf("%d",&l)==1)
    {
        if(l==0)break;
        mem(dp,-1);
        scanf("%d",&cn);
        FOR(i,1,cn)
        {
            scanf("%d",&f[i]);
        }
        f[0]=0;
        f[cn+1]=l;
        ll ans= scut(0,cn+1);
        printf("The minimum cutting is %lld.\n",ans);
    }
    return 0;
}

// Frist code which is not memory efficient
//
//ll dp[1005][1005],f[55],l,cn;
//ll scut(int s,int e)
//{
//    //pr2(s,e);
//    if(s+1==e){pr2(s,e);return 0;}
//    if(dp[s][e]!=-1)return dp[s][e];
//    ll mn=100000000;
//    FOR(i,0,cn-1)
//    {
//        if(s<f[i]&&f[i]<e)
//        {
//            ll temp=(scut(s,f[i])+scut(f[i],e)+(e-s));
//            //pr(temp);
//            mn=min(mn,temp);
//        }
//    }
//    if(mn==100000000)mn=0;
//    return dp[s][e]=mn;
//}
//int main()
//{
//    //READ("in.txt");
//    //WRITE("out.txt");
//    while(scanf("%d",&l)==1)
//    {
//        if(l==0)break;
//        mem(dp,-1);
//        scanf("%d",&cn);
//        FOR(i,0,cn-1)
//        {
//            scanf("%d",&f[i]);
//        }
//        ll ans= scut(0,l);
//        printf("The minimum cutting is %lld.\n",ans);
//    }
//    return 0;
//}
//

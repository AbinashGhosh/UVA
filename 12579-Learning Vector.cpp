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
int n,k;
pii p[55];
bool cmp(pii a,pii b)
{
    return atan2(a.x,a.y)>atan2(b.x,b.y);
}
int dp[52][52][2502];
int vs[52][52][2502];
int solve(int pos,int num,int h)
{
    //pr3(pos,num,h);
    if(pos<0||num==0)return 0;
    if(vs[pos][num][h]==true)return dp[pos][num][h];
    vs[pos][num][h]==true;
    int ret=solve(pos-1,num,h);
    ret=max(ret,2*h*p[pos].x+p[pos].x*p[pos].y+solve(pos-1,num-1,h+p[pos].y));
    return dp[pos][num][h]=ret;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        mem(vs,false);
        scanf("%d%d",&n,&k);
        FOR(i,0,n-1)
        scanf("%d%d",&p[i].x,&p[i].y);
        sort(p,p+n,cmp);
        int  ans=solve(n-1,k,0);
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}


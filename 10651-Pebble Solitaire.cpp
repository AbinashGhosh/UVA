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

int setbit(int N,int pos){return N=N|(1<<pos);}
bool checkbit(int N,int pos){return (bool)(N&(1<<pos));}
int resetbit(int N,int pos){return N=N&~(1<<pos);}
int m,dp[(1<<12)+5];
int solve(int mask)
{
    //pr(mask);
    if(dp[mask]!=-1)return dp[mask];
    int ret=0;
    FOR(i,0,9)
    {
        if(checkbit(mask,i)&&checkbit(mask,i+1)&&!checkbit(mask,i+2))
        {
            ret=max(ret,1+solve(resetbit(resetbit(setbit(mask,i+2),i+1),i)));
        }
        if(!checkbit(mask,i)&&checkbit(mask,i+1)&&checkbit(mask,i+2))
        {
            ret=max(ret,1+solve(setbit(resetbit(resetbit(mask,i+2),i+1),i)));
        }
    }
    return dp[mask]=ret;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,cnt;
    char s[100];
    scanf("%d\n",&T);
    FOR(i,1,T)
    {
        mem(dp,-1);
        gets(s);
        m=0;cnt=0;
        FOR(j,0,11)
        {
            if(s[j]=='o'){
            m=setbit(m,j);
            cnt++;
            }
        }
        int ans=cnt-solve(m);
        printf("%d\n",ans);
    }
    return 0;
}
/*
5
---oo-------
-o--o-oo----
-o----ooo---
oooooooooooo
oooooooooo-o
*/


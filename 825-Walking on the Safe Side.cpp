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

int r,c;
ll dp[105][105];
ll rock(int i,int j)
{

    if(i==r&&j==c)return 1;

    if(i<1||i>r||j<1||j>c)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    //pr2(i,j);//pr2(r,c);
    ll ret=0;
    ret=rock(i,j+1);
    ret+=rock(i+1,j);

    return dp[i][j]=ret;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int t,num,cnt;
    char s[1000];
    scanf("%d",&t);
    FOR(i,1,t)
    {
        scanf("%d%d\n",&r,&c);
        mem(dp,-1);
       // gets(s);
        //sscanf(s, "%d%d", &r, &c);
        while (gets(s)&&s[0])
        {
            istringstream ss(s);
            int x,y;
            ss>>x;
            while (ss>>y)
            {
                dp[x][y] = 0;
            }
        }
        dp[1][1]=-1;
        ll ans=rock(1,1);
        if(i!=1)printf("\n");
        printf("%lld\n",ans);
    }
    return 0;
}


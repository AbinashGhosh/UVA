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
using namespace std;

#define PI acos(-1.0)
#define MAX 10000007
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define READ(f) freopen(f, "r", stdin)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double,double> pdd;
typedef pair<ll , ll > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

inline int cross(pii a,pii b,pii c)
{
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
inline int onsegment(pii a,pii b,pii c)
{
    return (min(a.x,b.x)<=c.x&&c.x<=max(a.x,b.x)&&min(a.y,b.y)<=c.y&&c.y<=max(a.y,b.y));
}
bool LSI(pii a,pii b,pii c,pii d)
{
    int d1=cross(c,a,d);
    int d2=cross(c,b,d);
    int d3=cross(a,c,b);
    int d4=cross(a,d,b);
    if(((d1<0&&d2>0)||(d1>0&&d2<0))&&((d3<0&&d4>0)||(d3>0&&d4<0)))
        return true;
    if(!d1&&onsegment(c,d,a))return true;
    if(!d2&&onsegment(c,d,b))return true;
    if(!d3&&onsegment(a,b,c))return true;
    if(!d4&&onsegment(a,b,d))return true;
    return false;
}
int main()
{
    //READ("in.txt");
    int T,N,x,y;
    vpii p;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        FOR(i,1,N)
        {
            scanf("%d%d",&x,&y);
            p.pb(mp(x,y));
            scanf("%d%d",&x,&y);
            p.pb(mp(x,y));
        }
        int cont=N;
        FOR(i,0,N*2-1)
        {
            FOR(j,i+2,N*2-1)
            {
                if(LSI(p[i],p[i+1],p[j],p[j+1])){
                cont+=2;
                }
                j++;
            }
            i++;
        }
        printf("%d\n",cont);
        if(T!=0)puts("");
        p.clear();
    }
    return 0;
}




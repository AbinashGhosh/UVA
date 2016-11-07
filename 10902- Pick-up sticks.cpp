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
#define MAX 100005
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
typedef vector<pdd> vpdd;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,11000,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

inline double cross(pdd A,pdd B,pdd C)
{
    return ((B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y));
}
bool LSI(pdd a,pdd b,pdd c,pdd d)
{
    double d1=cross(c,a,d);
    double d2=cross(c,b,d);
    double d3=cross(a,c,b);
    double d4=cross(a,d,b);
    if(d1*d2<0&&d3*d4<0)
        return true;
    else
    return false;
}
int main()
{
    READ("in.txt");
    int N;
    vpdd p;
    vi a;
    while(scanf("%d",&N)==1)
    {
        if(N==0)break;
        p.clear();
        a.clear();
        double x,y,m,n;
        FOR(i,0,N-1)
        {
            scanf("%lf%lf",&x,&y);
            p.pb(mp(x,y));
            scanf("%lf%lf",&m,&n);
            p.pb(mp(m,n));
        }
        bool h;
        FOR(i,0,N*2-1)
        {
            h=false;
            FOR(j,i+2,N*2-1)
            {
                if(LSI(p[i],p[i+1],p[j],p[j+1])){
                    h=true;
                    break;
                }
                j++;
            }
            if(!h)a.pb(i/2+1);
            i++;
        }
        printf("Top sticks: ");
        FOR(i,0,a.size()-1)
        {
            if(i>0)printf(", ");
            printf("%d",a[i]);
        }
        printf(".\n",N);

    }
    return 0;
}

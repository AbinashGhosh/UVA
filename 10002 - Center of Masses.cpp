//Abinash Ghosh
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
#include <ctime>
#include <cassert>
using  namespace  std;

#define PI acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define FORR(i, b, e) for(int i = b; i >= e; i--)
#define FORI(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

typedef  long long ll;
//typedef  pair <int, int> pii;
typedef  pair <double , double> pii;
typedef  pair <ll , ll > pll;
typedef  vector <int> vi;
typedef  vector <pii> vpii;
typedef  vector <ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

#define MAX 100007
#define EPS 1e-9
/// Cross Product : ab x ac
inline ll cross(pii a, pii b, pii c)
{
    return 1ll*(b.x-a.x)*(c.y-a.y)-1ll*(c.x-a.x)*(b.y-a.y);
}
/// Center of mass of a convex/concave polygon
inline pii centerofM(vpii p,int n)
{
    double A=0;
    for(int i=0;i<n;++i)
        A+=1.*p[i].x*p[(i+1)%n].y-1.*p[i].y*p[(i+1)%n].x;
    A=A/2.0;
    ///also used as A=pArea(p);
    pii c=mp(0,0);
    for(int i=0;i<n;++i)
        c.x+=(p[i].x+p[(i+1)%n].x)*(p[i].x*p[(i+1)%n].y -p[i].y*p[(i+1)%n].x ) ;
    for(int i=0;i<n;++i)
        c.y+=(p[i].y+p[(i+1)%n].y)*(p[i].x*p[(i+1)%n].y -p[i].y*p[(i+1)%n].x ) ;
    c.x=c.x/6/A;
    c.y=c.y/6/A;
    return c;
}
/// Convex Hull ( Monotone Chain )
pii res[105];
vpii convexHull(vpii pnt,int np,int &nc)
{
    Sort(pnt);
    int j=0;
    //use <= to remove colinear points
    FOR(i,0,np-1){
       while(j>=2&&cross(res[j-2],res[j-1],pnt[i])<=0)j--;
       res[j++]=pnt[i];
    }
    int t=j+1;
    FORR(i,np-2,0){
       while(j>=t&&cross(res[j-2],res[j-1],pnt[i])<=0)j--;
       res[j++]=pnt[i];
    }
    nc=j-1;
    vpii ans;
    FOR(i,0,nc-1){
        ans.pb(res[i]);
    }
    return ans;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int n,m;
    double a,b;
    vpii point;
    while(1)
    {
        scanf("%d",&n);
        if(n<3)break;
        FOR(i,0,n-1)
        {
            scanf("%lf%lf",&a,&b);
            point.pb(mp(a,b));
        }
        vpii con=convexHull(point,n,m);
        pii ans=centerofM(con,m);
        printf("%.3lf %.3lf\n",ans.x,ans.y);
        point.clear();

    }
    return 0;
}








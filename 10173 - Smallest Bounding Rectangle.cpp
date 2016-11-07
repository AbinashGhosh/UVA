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
#include <limits>
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
#define ppr(a) cout<<a.x<<" "<<a.y<<"\n"
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

#define MAX 100007
#define EPS 1e-12
/// Convex Hull ( Monotone Chain )
pdd res[10005];
pdd pnt[1005];
/// Cross Product : ab x ac
inline double  cross(pdd a, pdd b, pdd c)
{
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
void convexHull(int np,int &nc)
{
    sort(pnt,pnt+np);
    int j=0;
    //use <= to remove colinear points
    FOR(i,0,np-1){
       while(j>=2&&cross(res[j-2],res[j-1],pnt[i])<=EPS)j--;
       res[j++]=pnt[i];
    }
    int t=j+1;
    FORR(i,np-2,0){
       while(j>=t&&cross(res[j-2],res[j-1],pnt[i])<=EPS)j--;
       res[j++]=pnt[i];
    }
    nc=j-1;
}
/// angle from line ab to  x-axis(on point a) CCW
double angleofLine(pdd a,pdd b)
{
    return atan2(b.y-a.y,b.x-a.x);
}
///Rotate point a CCW alpha radian w.r.t. b
inline pdd rotatePointByB(double alpha , pdd a,pdd b)
{
    if(fabs(alpha)<EPS)alpha=0.0;
    pdd r;
    a.x-=b.x;
    a.y-=b.y;
    r.x=b.x+a.x*cos(alpha)-a.y*sin(alpha);
    r.y=b.y+a.x*sin(alpha)+a.y*cos(alpha);
    return r;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int n,m;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        FOR(i,0,n-1)
        {
            scanf("%lf%lf",&pnt[i].x,&pnt[i].y);
        }
        convexHull(n,m);
        //pr(m);
        if(m<=2)
        {
            printf("0.0000\n");
            continue;
        }
        double area=numeric_limits<double>::max();
        FOR(i,0,m-1)
        {
            int j=(i+1)%m;
            double angle=angleofLine(res[i],res[j]);
            pdd mn=res[i];
            pdd mx=res[i];
            for(;j!=i;j=(j+1)%m)
            {
                pdd newp = rotatePointByB(-angle,res[j],res[i]);
                mn=mp(min(mn.x,newp.x),min(mn.y,newp.y));
                mx=mp(max(mx.x,newp.x),max(mx.y,newp.y));
            }
            area=min(area,(mx.x-mn.x)*(mx.y-mn.y));
        }
        printf("%.4lf\n",area);
    }
    return 0;
}








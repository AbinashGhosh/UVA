

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
pii p0,pnt[100005],res[100005];
inline double cross(pii a, pii b, pii c)
{
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
void convexHull(int np,int &nc)
{
    sort(pnt,pnt+np);
    int j=0;
    //use <= to remove colinear points
    FOR(i,0,np-1)
    {
       while(j>=2&&cross(res[j-2],res[j-1],pnt[i])<=EPS)j--;
          res[j++]=pnt[i];
    }
    for(int i=np-2,t=j+1;i>=0;i--)
    {
       while(j>=t&&cross(res[j-2],res[j-1],pnt[i])<=EPS)j--;
          res[j++]=pnt[i];
    }
    nc=j-1;
}
double pPerimeter(int nc,pii *p)
{
    double result=0,dx,dy;
    int n=nc;
    for(int i=0;i<n;++i)
    {
        dx= p[(i+1)%n].x - p[i].x;
        dy= p[(i+1)%n].y - p[i].y;
        result+=sqrt(dx*dx+dy*dy);
    }
    return result;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T,n,nc,cs=1;
    while(1)
    {
        scanf("%d",&n);
        if(!n)break;
        FOR(i,0,n-1)
           scanf("%lf%lf",&pnt[i].x,&pnt[i].y);
        convexHull(n,nc);
        printf("Region #%d:\n",cs++);
        FORR(i,nc,1)printf("(%.1lf,%.1lf)-",res[i].x,res[i].y);
        printf("(%.1lf,%.1lf)",res[0].x,res[0].y);

        printf("\nPerimeter length = %.2lf\n",pPerimeter(nc,res));
        {puts("");}
    }
    return 0;
}







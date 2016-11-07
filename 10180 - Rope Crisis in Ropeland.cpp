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

inline double dot(pii a,pii b,pii c)
{
    return (b.x-a.x)*(c.x-b.x)+(b.y-a.y)*(c.y-b.y);
}
inline double cross(pii a, pii b, pii c)
{
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
inline double Distance(pii a,pii b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
inline double lspd(pii a,pii b,pii c)
{
    if(dot(a,b,c)>-EPS)return Distance(b,c);
    if(dot(b,a,c)>-EPS)return Distance(a,c);
    double dist=cross(a,b,c)/Distance(a,b);
    return fabs(dist);
}
inline bool CLintersect(pii c,double r,pii a,pii b)
{
    if(lspd(a,b,c)>r+EPS)return false;
    return true;
}
inline double coslow(double a,double b,double c)
{
    return acos((a*a+b*b-c*c)/(2*a*b));
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    double d1,d2,d3,d,angle,r;
    scanf("%d",&T);
    FOR(i,1,T)
    {
        pii p1,p2;
        scanf("%lf%lf%lf%lf%lf",&p1.x,&p1.y,&p2.x,&p2.y,&r);
        pii center=mp(0.0,0.0);
        if(!CLintersect(center,r,p1,p2))
            printf("%.3lf\n",Distance(p1,p2)+EPS);
        else
        {
           d1=Distance(center,p1);
           d2=Distance(center,p2);
           d3=Distance(p1,p2);
           d=sqrt(d1*d1-r*r)+sqrt(d2*d2-r*r);
           angle=coslow(d1,d2,d3)-acos(r/d1)-acos(r/d2);
           if(angle>-EPS)
           d+=r*angle;
           printf("%.3lf\n",d+EPS);
        }
    }
    return 0;
}


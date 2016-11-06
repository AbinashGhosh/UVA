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
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

double dot(pdd A,pdd B,pdd C)
{
    double dot=(B.x-A.x)*(C.x-B.x)+(B.y-A.y)*(C.y-B.y);
    return dot;
}
inline double Distance(pdd A,pdd B)
{
     return ((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}
pdd lpd(pdd A,pdd B,pdd C,bool isSegment)
{
    double a1,b1,a2,b2,c1,c2;
    pdd r;
    double det;
    if(isSegment)
    {
        double dot1=dot(A,B,C);
        if(dot1>0){return B;}
        double dot2=dot(B,A,C);
        if(dot2>0){return A;}
    }
    a1=A.y-B.y;
    b1=B.x-A.x;
    c1=-b1*A.y-a1*A.x;
    a2=-b1;
    b2=a1;
    c2=-b2*C.y-a2*C.x;
    r.x=(double)(b1*c2-b2*c1)/(a1*b2-a2*b1);
    r.y=(double)(c1*a2-c2*a1)/(a1*b2-a2*b1);
    return r;
}
int main()
{
    //READ("in.txt");
    pdd r,t,e,m,p1,p2;
    int n;
    double d,dt,x,y;
    while(scanf("%lf%lf",&m.x,&m.y)!=EOF)
    {
        scanf("%d",&n);
        scanf("%lf%lf",&x,&y);
        p1=mp(x,y);
        d=2147483646.0;
        e=m;
        FOR(i,1,n)
        {
            scanf("%lf%lf",&x,&y);
            p2=mp(x,y);
            t=lpd(p1,p2,m,true);
            dt=Distance(e,t);
            if(dt<d){r=t;d=dt;}
            p1=p2;

        }
        printf("%.4lf\n%.4lf\n",r.x,r.y);
    }
    return 0;
}




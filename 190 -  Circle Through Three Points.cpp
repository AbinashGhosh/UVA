#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
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

//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1, 0, 1};
//int dy[]={0,1,1, 1, 0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1, 1, 2};
//int dy[]={1,2, 2, 1,-1,-2,-2,-1};//Knight Direction


/// Creates a line with equation ax + by + c = 0
struct line
{
    double a, b, c;
    line() {}
    line( pdd p1,pdd p2 )
    {
        a = p1.y - p2.y;
        b = p2.x - p1.x;
        c = p1.x * p2.y - p2.x * p1.y;
    }
};

///Line - Line Intersection (Lines)
inline bool LLInter(line p,line q,pdd &r)
{
    double det=p.a*q.b-q.a*p.b;
    if(det==0)return false;
    r.x=(p.b*q.c-q.b*p.c)/det;
    r.y=(p.c*q.a-q.c*p.a)/det;
    return true;
}

///Perpendicular Line of a Given Line Through a Point
inline line PerLine(line L,pdd p)
{
    line r;
    r.a=L.b, r.b=-L.a;
    r.c=-r.a*p.x-r.b*p.y;
    return r;
}

/// Circle Through 3 Points (Multiple function used)
pdd circleTP(pdd a, pdd b,pdd c)
{
    line p(a,b), q(b,c);
    pdd e=mp((a.x+b.x)/2.0,(a.y+b.y)/2.0);
    pdd f=mp((c.x+b.x)/2.0,(c.y+b.y)/2.0),centre;
    line pp=PerLine(p,e);
    line qq=PerLine(q,f);
    LLInter(pp,qq,centre);
    return centre;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");

    return 0;
}


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

inline ll Distance(pll a,pll b)
{
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
inline ll cross(pll a, pll b, pll c)
{
    return abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y));
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    pll p[5];
    ll dt[3],d,A,g,Ar,dr;
    int ch=0;
    while(1)
    {
        ch=0;
        FOR(i,0,3){
        scanf("%lld%lld",&p[i].x,&p[i].y);
        if(p[i].x==0&&p[i].y==0)ch++;
        }
        if(ch==4)break;
         dt[0]=Distance(p[0],p[1]);
         dt[1]=Distance(p[1],p[2]);
        d=4*max(dt[0],dt[1]);
        A=cross(p[0],p[1],p[2]);
        A=A*A;
        g=gcd(A,d);
        A/=g;
        d/=g;
        printf("(%lld/%lld)*pi\n",A,d);
    }
    return 0;
}

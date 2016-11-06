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
typedef pair<ll , ll > pll;
typedef vector<int> vi;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

inline int cross(pii A,pii B,pii C)
{
    return ((B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y));
}
inline bool onsegment(pii i,pii j,pii k)
{
    return (min(i.x,j.x)<=k.x&&k.x<=max(i.x,j.x)&&min(i.y,j.y)<=k.y&&k.y<=max(i.y,j.y));
}
bool LSI(pii a,pii b,pii c,pii d)
{
    int d1=cross(c,a,d);
    int d2=cross(c,b,d);
    int d3=cross(a,c,b);
    int d4=cross(a,d,b);
    if(((d1>0&&d2<0)||(d1<0&&d2>0))&&((d3>0&&d4<0)||(d3<0&&d4>0)))
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
    int T;
    pii a,b,p1,p2,p3,p4;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d%d",&a.x,&a.y,&b.x,&b.y);
        scanf("%d%d%d%d",&p1.x,&p1.y,&p3.x,&p3.y);
        p2=mp(p1.x,p3.y);
        p4=mp(p3.x,p1.y);
        if(onsegment(p1,p3,a)||onsegment(p1,p3,b)){printf("T\n");continue;}
        if(LSI(a,b,p1,p2)){printf("T\n");continue;}
        if(LSI(a,b,p2,p3)){printf("T\n");continue;}
        if(LSI(a,b,p3,p4)){printf("T\n");continue;}
        if(LSI(a,b,p4,p1)){printf("T\n");continue;}
        printf("F\n");
    }
    return 0;
}




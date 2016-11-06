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
#define EPS 1e-9
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
pdd r;
int LLI(pii a,pii b,pii c,pii d)
{
    int a1,a2,b1,b2,c1,c2;
    a1=b.y-a.y;
    b1=a.x-b.x;
    c1=a1*a.x+b1*a.y;
    a2=d.y-c.y;
    b2=c.x-d.x;
    c2=a2*c.x+b2*c.y;
    double det=a1*b2-a2*b1;
    if(det==0)
    {
        if(fabs(a1*a.x+b1*a.y-c1-a2*a.x-b2*a.y+c2)<EPS) return 2;
        else return 0;
    }
    else
    {
      r.x=(b2*c1-b1*c2)/det;
      r.y=(a1*c2-a2*c1)/det;
      return 1;
    }
}

int main()
{
    //READ("in.txt");
    int T;
    vpii p;
    scanf("%d",&T);
    printf("INTERSECTING LINES OUTPUT\n");
    while(T--)
    {
        int x,y,i;
        for(i=1;i<=4;++i)
        {
            scanf("%d%d",&x,&y);
            p.pb(mp(x,y));
        }
        int l=LLI(p[0],p[1],p[2],p[3]);
        if(l==1)
            printf("POINT %.2lf %.2lf\n",r.x,r.y);
        else if(l==2)
            printf("LINE\n");
        else if(l==0)
            printf("NONE\n");
        p.clear();
    }
    printf("END OF OUTPUT\n");
    return 0;
}




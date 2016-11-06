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
typedef pair<ll , ll > pll;
typedef vector<int> vi;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

double pArea(vector<pii> p)
{
    int area=0;
    FOR(i,0,p.size()-1)
    area+=(p[i].x*p[(i+1)%p.size()].y-p[i].y*p[(i+1)%p.size()].x);
    return fabs(area/2.0);
}
int main()
{
    //READ("in.txt");
    int T,n,x,y,w;
    double par,sw,wf,wr,area;
    vector<pii>p;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        FOR(i,1,n)
        {
            scanf("%d%d",&x,&y);
            p.pb(mp(x,y));
        }
        scanf("%d",&w);
        area=w*pArea(p);
        scanf("%lf%lf%lf",&par,&sw,&wf);
        wr=(par*area)/100.0;
        //printf("%lf %lf %lf\n",area,sw,wr);
        wr=wr-sw;
        if(wr<0.0-EPS)
        {
            printf("Lack of water. ");
            wr=0.0;
        }
        wr=wr+wf;
        if(wr>area+EPS)
        {
            printf("Excess of water. ");
            wr=area;
        }
        //printf("%lf %lf %lf\n",area,sw,wr);
        par=(wr*100.0)/area;
        int res=par;
        printf("Final percentage: %d\%\n",res);
        p.clear();
    }
    return 0;
}



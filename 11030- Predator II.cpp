
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
typedef vector<pdd> vpdd;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int PIP(vpdd p,pdd r)
{
    int i,j,c=0,N=p.size();
    for (i = 0, j = N-1; i < N; j = i++)
    {
        if (((p[i].y>r.y) != (p[j].y>r.y))&&(r.x<((p[j].x-p[i].x)*(r.y-p[i].y)/(p[j].y-p[i].y)+p[i].x)) )
            c = !c;
    }
    return c;
}
int main()
{
    //READ("P2.txt");
    int T,N,V,Q;
    double x,y;
    vpdd p[22];
    pdd a,b;
    scanf("%d",&T);
    FOR(i,1,T)
    {
        scanf("%d",&N);
        printf("Case %d:\n",i);
        FOR(j,0,N-1)
        {
            scanf("%d",&V);
            FOR(k,1,V)
            {
                scanf("%lf%lf",&x,&y);
                p[j].pb(mp(x,y));
            }
        }
        scanf("%d",&Q);
        FOR(q,1,Q)
        {
            int cnt=0;
            scanf("%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y);
            FOR(s,0,N-1)
            if(PIP(p[s],a)!=PIP(p[s],b))cnt++;
            printf("%d\n",cnt);
        }
        FOR(j,0,N-1)
        p[j].clear();
    }
    return 0;
}

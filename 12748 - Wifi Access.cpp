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

struct router
{
    int x,y,r;
};
bool check(router a, pii b)
{
    int ans=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
    if(ans<=a.r*a.r)return true;
    return false;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,n,p;
    router rt[105];
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&n,&p);
        FOR(i,1,n)
        scanf("%d%d%d",&rt[i].x,&rt[i].y,&rt[i].r);
        pii tem;
        printf("Case %d:\n",t);
        FOR(i,1,p)
        {
            scanf("%d%d",&tem.x,&tem.y);
            bool chk=false;
            FOR(i,1,n)
            {
                if(check(rt[i],tem))
                {
                    chk=true;
                    break;
                }
            }
            if(chk)
                printf("Yes\n");
            else
                printf("No\n");
        }

    }
    return 0;
}



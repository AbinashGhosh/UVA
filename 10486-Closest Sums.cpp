#include <math.h>
#include <cstdio>
#include <cstdlib>
#include <cctype>
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


int main()
{
    //READ("in.txt");
    int m,n,a[1005],q,s,d,t=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        FOR(i,0,n-1)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        printf("Case %d:\n",t++);
        FOR(i,1,m)
        {
            scanf("%d",&q);
            int dif=2147483647;
            FOR(j,0,n-1)
            {
                FOR(k,j+1,n-1)
                {
                    int ak=abs(q-(a[j]+a[k]));
                    if(ak<dif)
                    {
                        dif=ak;
                        s=j,d=k;
                    }
                }
            }
            printf("Closest sum to %d is %d.\n",q,a[s]+a[d]);
        }
    }
    return 0;
}



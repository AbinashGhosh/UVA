//Abinash Ghosh
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
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
#include <ctime>
#include <cassert>
#include <limits>
using  namespace  std;

#define PI acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define FORR(i, b, e) for(int i = b; i >= e; i--)
#define FORI(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define ppr(a) cout<<a.x<<" "<<a.y<<"\n"
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

#define MAX 100007
#define EPS 1e-9
int main()
{
    //READ("in.in");
   //WRITE("out.out");
    unsigned long long  m,n,c,d,e;
    int i,T;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%llu%llu",&m,&n);
        /*//easy solution
        e=m;
        while (m <n )m = m | (m + 1);c=m|n;
        m=e;
        while (n > m)n = n & (n - 1);d=m&n;
        printf("Case %d: %lld %lld\n",t,c,d);

        */
        /*//second solution
        e=0;
        for(i=60;i>=0;--i)
        {
            c=(1ll<<i);
            if((c&m)!=(c&n))break;
            e+=(c&m);
        }
        printf("Case %d: %lld %lld\n",t,e+(1ll<<(i+1))-1,e);
        */
        /*/

        i=60;
        while(((m & (1LL<<i))==(n & (1LL<<i))) && i>=0) i--;
        n=((1LL<<(i+1))-1);
        m|=n;
        */
        c=m^n;
        i=0;
        if(ct!=0)i=64- __builtin_clzll(c);
        n=((1LL<<(i))-1);
        m|=n;
        printf("Case %d: %llu %llu\n",t,m,m-n);
    }

    return 0;
}

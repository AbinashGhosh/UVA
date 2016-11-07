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
inline ll  bigmod ( ll  a, ll  p, ll  m ) {
    ll  res = 1 % m, x = a % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m; p >>= 1;
    }
    return res;
}
ll modInv(ll a,ll m)
{
    return bigmod(a,m-2,m);
}

int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T;
    ll MOD=1000000007,d,v;
    scanf("%d",&T);
    FOR(cs,1,T)
    {
        ll ans;
        scanf("%lld%lld",&d,&v);
        if(d==0)ans=1;
        else if(v==1)if(d==1)ans=(d+1)%MOD;else ans=-1;
        else if(v==2)ans=(v*d+1)%MOD;
        else
        {
            ll p=v-1;
            ll mi=v-2;
            ll bb=(bigmod(p,d,MOD)+MOD-1)%MOD;
            ll mm=modInv(mi,MOD);
            bb=(v*bb)%MOD;
                       // pr(bb);
            ans=(mm*bb+1)%MOD;
        }
        printf("Case %d: %lld\n",cs,ans);
    }
    return 0;
}


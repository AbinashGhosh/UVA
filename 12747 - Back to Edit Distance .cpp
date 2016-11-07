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

#define MAX 200007
#define EPS 1e-9
#define INF 20000007

int L[MAX],S[MAX],I[MAX];
int M[MAX];
int LISnlogn(int n)
{
    I[0]=-INF;
    for(int i=1;i<=n;++i) I[i]=INF;
    int max=0;
    for(int i=0;i<n;++i)
    {
        int low=0,high=max,mid;
        while(low<=high)
        {
            mid= (low+high)/2;
            if(I[mid]<S[i])
               low=mid+1;
            else
               high=mid-1;
        }
        I[low]=S[i];
        L[i]=low;
        if(max<low) max=low;
    }
    return max;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T,n,a;
    scanf("%d",&T);
    FOR(cs,1,T)
    {
        scanf("%d",&n);
        FOR(i,0,n-1){
            scanf("%d",&a);
            M[a]=i+1;
        }
        FOR(i,0,n-1){
            scanf("%d",&a);
            S[i]=M[a];
        }
        int res=2*(n-LISnlogn(n));
        printf("Case %d: %d\n",cs,res);
    }
    return 0;
}

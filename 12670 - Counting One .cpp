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
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

typedef  long long ll;
typedef  unsigned long long ull;
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
int y=0;
ull f(ull n)
{
    //pr(n);
    if(n==0||n==1)return n;
    int p;
    ull q=n;
    for(p=0,q=n;q>0;q=q>>1,p++);//pr(p);
    p--;
    //pr(p);
    ull lp=(ull)1<<p;
    //pr(lp);
    ull ans= p*(lp>>1)+(n-lp+1)+f(n-lp);
   // pr2(ans,n);

    return ans;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    ull a,b;
    while(scanf("%llu %llu",&a,&b)!=EOF)
    {
        //pr(f(a-1));
        ull ans= f(b)-f(a-1);
        printf("%llu\n",ans);
    }
    return 0;
}



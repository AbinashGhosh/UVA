//Abinash Ghosh
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
#include <ctime>
#include <cassert>
using  namespace  std;

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
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 30005
#define EPS 1e-9

int par[MAX],cnt[MAX];

void init(int n)
{
    FOR(i,1,n)
       par[i]=i,cnt[i]=1;
}
int find_res(int r)
{
    if(par[r]==r)return r;
    return find_res(par[r]);
}
void Union(int a,int b)
{
    int u=find_res(a);
    int v=find_res(b);
    if(u!=v){
        par[u]=v;
        cnt[v]+=cnt[u];
    }
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T,n,m,u,v;
    scanf("%d",&T);
    FOR(t,1,T)
    {

        scanf("%d%d",&n,&m);
        init(n);
        FOR(i,1,m)
        {
            scanf("%d%d",&u,&v);
            Union(u,v);
        }
        int mx=0;
        FOR(i,1,n)
        mx=max(mx,cnt[i]);
        printf("%d\n",mx);
    }
    return 0;
}




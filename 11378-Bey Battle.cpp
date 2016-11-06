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

pii p[100005],py[100005];
int Dist(pii a,pii b)
{
    return max(abs(a.x-b.x),abs(a.y-b.y));
}
bool comy(pii a,pii b)
{
    return (a.y==b.y)?(a.x<b.x):(a.y<b.y);
}
int closestpair(int l,int r)
{
    if(l>=r) return 1000000000;
    if(l+1==r)return Dist(p[l],p[r]);
    int mid=(l+r)/2;
    int dl=closestpair(l,mid);
    int dr=closestpair(mid+1,r);
    int d=min(dl,dr);
    int k=0;
    FOR(i,l,r)
        if(abs(p[i].x-p[mid].x)<d)
           py[k++]=p[i];
    sort(py,py+k,comy);
    FOR(i,0,k-1)
       for(int j=i+1;j<k&&(py[j].y-py[i].y)<d;j++)
         d=min(d,Dist(py[i],py[j]));
    return d;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        FOR(i,0,n-1)
        {
            scanf("%d%d",&p[i].x,&p[i].y);
        }
        sort(p,p+n);
        int ans=closestpair(0,n-1);
        printf("%d\n",ans);

    }
    return 0;
}


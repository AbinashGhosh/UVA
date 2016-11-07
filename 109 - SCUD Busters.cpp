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
#define eps 1e-9
pii p0,pnt[100],res[50][100],power[30];
int add[1000];
int cross(pii o, pii a, pii b) {
  return (a.x - o.x) * (b.y - o.y) - (a.y - o.y) * (b.x - o.x);
}
inline bool inConvexPolygon(int q,int nc,pii p)
{
    FOR(i,0,nc-1)
    {
        if(cross(p,res[q][i],res[q][(i+1)%(nc)])<0)return false;
    }
    return true;
}
void convexHull(int np,int &nc,int k)
{
    sort(pnt,pnt+np);
    int j=0;
    FOR(i,0,np-1)
    {
       while(j>=2&&cross(res[k][j-2],res[k][j-1],pnt[i])<=0)j--;
          res[k][j++]=pnt[i];
    }
    for(int i=np-2,t=j+1;i>=0;i--)
    {
       while(j>=t&&cross(res[k][j-2],res[k][j-1],pnt[i])<=0)j--;
          res[k][j++]=pnt[i];
    }
    // printf("%d\n",j-1);
    nc=j-1;
}

int  pArea(int nc,int q)
{
    int area=0,n=nc;
    for(int i=0;i<n;++i)
        area+= res[q][i].x * res[q][(i+1)%n].y - res[q][i].y * res[q][(i+1)%n].x;
    return area;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int k=0,n,nc[100];
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)break;
        k++;
        FOR(i,0,n-1)
            scanf("%d%d",&pnt[i].x,&pnt[i].y);
        convexHull(n,nc[k],k);
        //pr(nc[k]);
    }
    int m=0;
    int ans=0;
    while(scanf("%d%d",&pnt[m].x,&pnt[m].y)!=EOF)
    {
        FOR(i,1,k)
        {
            if(add[i]==0&&inConvexPolygon(i,nc[i],pnt[m]))
            {
                add[i]=1;
                pr(k);
                break;
            }
        }
        m++;
    }
    FOR(i,1,k)
    if(add[i])ans+=pArea(nc[i],i);
    printf("%.2lf",ans/2.0);

    return 0;
}

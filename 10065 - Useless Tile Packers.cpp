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
pii pnt[105],res[105];
inline int cross(pii a, pii b, pii c)
{
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
void convexHull(int np,int &nc)
{
    sort(pnt,pnt+np);
    int j=0;
    //use <= to remove colinear points
    FOR(i,0,np-1)
    {
       while(j>=2&&cross(res[j-2],res[j-1],pnt[i])<=0)j--;
          res[j++]=pnt[i];
    }
    for(int i=np-2,t=j+1;i>=0;i--)
    {
       while(j>=t&&cross(res[j-2],res[j-1],pnt[i])<=0)j--;
          res[j++]=pnt[i];
    }
    nc=j-1;
}
double pArea(vector<pii> p)
{
    int area=0,n=p.size();
    for(int i=0;i<n;++i)
        area+= p[i].x * p[(i+1)%n].y - p[i].y * p[(i+1)%n].x;
    return fabs(area/2.0);
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int np,nc,t=1;
    while(scanf("%d",&np)!=EOF)
    {
        if(np==0)break;
        FOR(i,0,np-1)
        {
            scanf("%d%d",&pnt[i].x,&pnt[i].y);
        }
        vpii p;
        p.insert(p.begin(),pnt,pnt+np);
               // pr((int)p.size());
        double area=pArea(p);
        convexHull(np,nc);
        p.clear();
        p.insert(p.begin(),res,res+nc);

        double area2=pArea(p);
        //pr2(area,area2);
        area=fabs(area2-area);
        double ans=(area*100.0)/area2;
        printf("Tile #%d\nWasted Space = %.2lf %%\n\n",t++,ans+EPS);
    }
    return 0;
}



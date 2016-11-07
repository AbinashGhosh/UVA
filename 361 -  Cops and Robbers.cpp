
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
#define EPS 1e-9
pii p0,pnt[505],res[3][505];
pii tt[2][4];
inline int sqDistance(pii a,pii b){
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
inline int cross(pii a, pii b, pii c){
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}

int c,r,o;
void makeunique(int &np)
{
    sort(pnt,pnt+np);
    np=unique(pnt,pnt+np)-pnt;
}
inline bool comp(pii a,pii b)
{
    int d=cross(p0,a,b);
    if(d<0||(!d&&sqDistance(p0,a)>sqDistance(p0,b)))return false;
    return true;
}
//bool cmp(pii a,pii b)
//{
//    if(cross(p0,a,b)==0)return sqDistance(p0,a)<sqDistance(p0,b);
//    pii c=mp(a.x-p0.x,a.y-p0.y);
//    pii d=mp(b.x-p0.x,b.y-p0.y);
//    return atan2(c.y,c.x)-atan2(d.y,d.x)<0;
//}
inline bool inConvexPolygon(int q,int nc,pii p)
{
    int lo=1,hi=nc-1,mid;
    while(hi-lo>1)
    {
        mid=(lo+hi)>>1;
        if(cross(res[q][0],res[q][mid],p)<0)hi=mid;
        else lo=mid;
    }
    if(cross(res[q][0],res[q][lo],p)<0)return false;
    if(cross(res[q][lo],res[q][hi],p)<0)return false;
    if(cross(res[q][hi],res[q][0],p)<0)return false;
    return true;
}
void convexHull(int np,int &nc,int q)
{
    int pos=0;
    FOR(i,0,np-1)
        if(pnt[i].y<pnt[pos].y||(pnt[i].y==pnt[pos].y&&pnt[i].x<pnt[pos].x))
            pos=i;
    swap(pnt[0],pnt[pos]);
    p0=pnt[0];
    sort(&pnt[1],&pnt[np],comp);
    int j=0;
    FOR(i,0,np-1)
    {
        while(j>=2&&cross(res[q][j-2],res[q][j-1],pnt[i])<0)j--;
        res[q][j++]=pnt[i];
    }
    nc=j;
}
/// Point k is in Segment Point i to j
inline bool onsegment(pii i,pii j,pii k)
{
    return (min(i.x,j.x)<=k.x&&k.x<=max(i.x,j.x)&&
            min(i.y,j.y)<=k.y&&k.y<=max(i.y,j.y))&&cross(i,k,j)==0;
}
bool checkInside(pii *P, int n, pii v)
{
    for (int i = 0; i < n; i++)
    {
       // pr3("YYYYY ",P[i].x,P[i].y);
        int j = (i + 1) % n;
        if (v == P[i] || onsegment(P[i], P[j],v))
            return true;
    }
return false;
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int T=1;
    int num_c,num_r;
    while(1)
    {
        pii p;
        num_c=0,num_r=0;
        scanf("%d%d%d",&c,&r,&o);
        if(c==0&&r==0&&o==0)break;
        FOR(i,0,c-1)scanf("%d%d",&pnt[i].x,&pnt[i].y);
        makeunique(c);
        if(c>2)convexHull(c,num_c,0);
        else
        {
            FOR(j,0,c)
            tt[0][j]=pnt[j];
        }
        FOR(i,0,r-1)scanf("%d%d",&pnt[i].x,&pnt[i].y);
        makeunique(r);
        if(r>2)convexHull(r,num_r,1);
        else
        {
            FOR(j,0,r)
            tt[1][j]=pnt[j];
        }
        printf("Data set %d:\n",T++);
        FOR(i,0,o-1)
        {
            scanf("%d%d",&p.x,&p.y);
            if((num_c>2&&inConvexPolygon(0,num_c,p))||(c<3&&checkInside(tt[0],c,p)))
                printf("     Citizen at (%d,%d) is safe.\n",p.x,p.y);
            else if((num_r>2&&inConvexPolygon(1,num_r,p))||(r<3&&checkInside(tt[1],r,p)))
                printf("     Citizen at (%d,%d) is robbed.\n",p.x,p.y);
            else printf("     Citizen at (%d,%d) is neither.\n",p.x,p.y);
        }
        puts("");
    }
    return 0;
}

//||(c==2&&onsegment(res[0][500],res[0][501],p))
//

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
// scanf("%d",&n);
inline bool comp (const pii &a, const pii &b)
{
    return (a.first < b.first) || (a.first == b.first && a.second > b.second);
}
const int MAX_N = int (1e5) + 7;
int res[MAX_N];
pii cam[MAX_N], can[MAX_N];
int main()
{
    //READ("inA.txt");
    //WRITE("outA.txt");
    int n,m,T,u,v;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&m,&n);
        FOR(i,0,m-1)
        {
            scanf("%d%d",&u,&v);
            cam[i]=mp(u,v);
        }
        FOR(i,0,n-1)
        {
            scanf("%d",&u);
            can[i]=mp(u,i);
        }
        sort(cam,cam+m,comp);
        sort(can,can+n);
        int cur=0;
        FOR(i,1,m-1)
        {
            if(cam[i].y>cam[cur].y)cam[++cur]=cam[i];
        }
        m=cur+1;
        cur=0;
        FOR(i,0,n-1)
        {
            int p=can[i].x;
            int &mm=res[can[i].y]=0;
            if(cur>=m)cur=m-1;
            while(cur<m&&p>=cam[cur].x)
            {
                if(p>=cam[cur].y)
                {
                    cur++;
                    continue;
                }
                int val=min(p-cam[cur].x,cam[cur].y-p);
                if(val<mm)break;
                mm=val;
                cur++;
            }
            cur--;
            //res[can[i].y]=ress;
        }
        printf("Case %d:\n",t);
        FOR(i,0,n-1)
        {
            printf("%d\n",res[i]);
        }
    }
    return 0;
}


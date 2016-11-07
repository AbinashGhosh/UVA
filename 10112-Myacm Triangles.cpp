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
using namespace std;

#define PI acos(-1.0)
#define MAX 10000007
#define EPS 1e-9
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define READ(f) freopen(f, "r", stdin)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double,double> pdd;
typedef pair<ll , ll > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll > vl;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

inline int tArea(pii a, pii b,pii c)
{
    return (a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y));
}
int main()
{
    //READ("in.txt");
    int N,x,y;
    vector<pii>p;
    char ch,s[3],lat[20];
    while(scanf("%d",&N)==1)
    {
        if(N==0)break;
        FOR(i,0,N-1)
        {
            getchar();
            scanf("%c%d%d",&lat[i],&x,&y);
            p.pb(mp(x,y));
            //printf("%c %d %d \n",lat[i],x,y);
        }
        int M=0,A,a1,a2,a3,d;
        FOR(i,0,N-1)
        {
            FOR(j,i+1,N-1)
            {
                FOR(k,j+1,N-1)
                {
                    A=abs(tArea(p[i],p[j],p[k]));
                    //printf("%d ",A);
                    if(M<A)
                    {
                        int b=0;
                        FOR(l,0,N-1)
                        {
                            if(l!=i&&l!=j&&l!=k)
                            {
                                a1=abs(tArea(p[l],p[j],p[k]));
                                a2=abs(tArea(p[i],p[l],p[k]));
                                a3=abs(tArea(p[i],p[j],p[l]));
                                int S=a1+a2+a3;
                                if(S==A){b=1;break;}
                            }
                        }
                        if(b==0)
                        {
                            M=A;
                            s[0]=lat[i];
                            s[1]=lat[j];
                            s[2]=lat[k];}
                    }
                }
            }
        }
        sort(s,s+3);
        printf("%c%c%c\n",s[0],s[1],s[2]);
        p.clear();
    }
    return 0;
}




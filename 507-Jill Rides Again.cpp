#include <math.h>
#include <cstdio>
#include <cstdlib>
#include <cctype>
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
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

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

int a[30005],s,e,d,se;
void MaxSS(int n)
{
    int maxF=0,maxE=0;
    s=1,e=0,d=0,se=0;
    FOR(i,0,n)
    {
        maxE=maxE+a[i];
        if(maxE<0)maxE=0,s=i+2;
        else if(maxF<maxE)
        {
            maxF=maxE;
            se=s;
            e=i+2;
        }
        else if(maxF==maxE)
        {
            if((i+2-s)>(e-se))
            {
                se=s;
                e=i+2;
            }
        }
    }
    //printf("%d %d\n",se,e);
}
int main()
{
    //READ("in.txt");
    int n,t;
    scanf("%d",&t);
    //pr(t);
    FOR(i,1,t)
    {
        scanf("%d",&n);
        FOR(j,0,n-2)
        scanf("%d",&a[j]);
        MaxSS(n-2);
        if(e>se)
        printf("The nicest part of route %d is between stops %d and %d\n",i,se,e);
        else
        printf("Route %d has no nice parts\n",i);

    }
    return 0;
}


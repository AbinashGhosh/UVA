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
pdd r;
double rx,ry;
bool LLI(int a1,int a2,int b1,int b2,int c1,int c2)
{
    double det=a1*b2-b1*a2;
    if(det==0) return false;
    else
    {
       rx=(b2*c1-b1*c2)/det+EPS;
       ry=(a1*c2-a2*c1)/det+EPS;
       //printf("The fixed point is at %.2lf %.2lf %lf.\n",rx,ry);
       return true;
    }
}

int main()
{
    //READ("in.txt");
    int a1,a2,b1,b2,c1,c2;
    while(scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2)==6)
    {
        if(a1==0&&a2==0&&b1==0&&b2==0&&c1==0&&c2==0)break;
        if(LLI(a1,a2,b1,b2,c1,c2))
            printf("The fixed point is at %.2lf %.2lf.\n",rx,ry);
        else
            printf("No fixed point exists.\n");
    }
    return 0;
}




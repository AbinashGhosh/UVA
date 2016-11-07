//Eklavya Abinash Abhi (Om)
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

using namespace std;

int main()
{
    //READ("in.txt");
    int T;
    double a,b,c,d;
    scanf("%d",&T);
    FOR(i,1,T)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        double m=a-b;
        double s=c+d+m;
        double ta=sqrt(s*(s-c)*(s-d)*(s-m));
        double h=(ta*2)/m;
        double TA=((a+b)/2)*h;
        double A=m/h;
        double B=2*b;
        double C=-TA;
        double n=(-B+sqrt(B*B-4*A*C))/(2*A);
        double l=c*(1-(n/h));
        double r=d*(1-(n/h));
        printf("Land #%d: %lf %lf\n",i,l,r);
    }
    return 0;
}


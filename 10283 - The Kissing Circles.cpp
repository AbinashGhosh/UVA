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
#define EPS 1e-12
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

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int n;
    double R,r,x,angle,seg,blue;
    while(scanf("%lf%d",&R,&n)!=EOF)
    {
        if( n == 1 )
        {
            printf("%.10lf %.10lf %.10lf\n",R,0.0,0.0);
            continue ;
        }
        if( n == 2 )
        {
            printf("%.10lf %.10lf %.10lf\n",R/2.00,0.0,PI*R*R/2.00);
            continue ;
        }
        double Angle=PI/n*1.0;
        x=R/(1+sin(Angle));
        r=R-x;
        angle=(PI-Angle*2)/2.0;
        seg=2*(angle*0.5*r*r);
        double s=(x+x+2*r)/2.0;
        double tarea=sqrt(s*(s-x)*(s-x)*(s-2*r));
       // pr2(seg,tarea);
        blue=n*(tarea-seg);
        double green=PI*R*R-blue-n*PI*r*r;
        printf("%.10lf %.10lf %.10lf\n",r,blue+EPS,green+EPS);
    }
    return 0;
}


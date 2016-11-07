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

long long a[1005],fib[43],b[1005];
void divisor(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            a[i]++;
            n=n/i;
        }
        if(n==0)break;
    }
    if(n!=0)a[n]=1;
}
void divisor2(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            b[i]++;
            n=n/i;
        }
        if(n==0)break;
        //pr(b[i]);
    }
    if(n!=0)b[n]=1;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    fib[0]=0;
    fib[1]=1;
    FOR(i,2,41)
    fib[i]=fib[i-2]+fib[i-1];
    int x,y,z;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d%d",&z,&x,&y);
        FOR(j,0,1004)a[j]=0;
        FOR(j,0,1004)b[j]=0;
        divisor(x);divisor2(y);
        FOR(i,2,1004)
        {
            //pr2(a[i],b[i]);
            long long sum=a[i]*fib[z-1]+b[i]*fib[z];
            if(sum!=0)
                printf("%d %lld\n",i,sum);
        }
        printf("\n");
    }
    return 0;
}

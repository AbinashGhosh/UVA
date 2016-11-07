#include <math.h>
#include <cstdio>
#include <cstdlib>
#include <cctype>
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


int main()
{
    //READ("in.txt");
    int n,x[11];
    bool h=false;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        if(h)printf("\n");
        h=true;
        int ch=0,max=98765/n;
        FOR(i,1234,max)
        {
            FOR(k,0,9)x[k]=0;
            int t= n*i;
            int h=t,r=i,cnt=0;
            if(i<10000)x[0]=1;
            while(r>0)
            {
                x[r%10]=1;
                r=r/10;
            }
            if(t<98766)
            {

                while(h>0)
                {
                    x[h%10]++;
                    h=h/10;
                }
                FOR(j,0,9)if(x[j]==1)cnt++;
                if(cnt==10)
                {
                    ch=1;
                    printf("%05d / %05d = %d\n",t,i,n);

                }
            }
        }
        if(ch==0) printf("There are no solutions for %d.\n",n);

    }
    return 0;
}

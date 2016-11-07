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
bool prime[1000005];
int res[1000005];
void sieve(int n)
{
    prime[1]=true;
    for(int i=3;i*i<=n;++i)
       if(prime[i]==false)
           for(int j=i*i;j<=n;j+=i+i)
            prime[j]=true;
}
bool isprime(int p)
{
    if(p==2) return true;
    if(p%2==0) return false;
    return !prime[p];

}
int main()
{
    //READ("in.txt");
    sieve(1000002);
    int cnt=0,t,a,b,c;
    for(int i=1;i<=1000002;++i)
    {
        if(!isprime(i)){res[i]=cnt;continue;}
        int ans=0,j=i;
        while(j>0)
        {
            ans+=j%10;
            j/=10;
        }
        if(isprime(ans))cnt++;
        res[i]=cnt;
    }
    scanf("%d",&t);
    FOR(i,1,t)
    {
        scanf("%d%d",&a,&b);
        c=res[b]-res[a-1];
        printf("%d\n",c);
    }
    return 0;
}



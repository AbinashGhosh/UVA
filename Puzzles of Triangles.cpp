#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
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
using  namespace  std;

#define PI acos(-1.0)
#define MAX 10000007
#define EPS 1e-9

#define mem(a,b) memset(a,b,sizeof(a))
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

//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1, 0, 1};
//int dy[]={0,1,1, 1, 0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1, 1, 2};
//int dy[]={1,2, 2, 1,-1,-2,-2,-1};//Knight Direction

/*
Three side of right tringle is sqrt(x1^2+y1^2),sqrt(x2^2+y2^2),sqrt((x1-x2)^2+(y1-y2)^2)
From pythagoras theorem (x1^2+y1^2)+((x1-x2)^2+(y1-y2)^2)=(x2^2+y2^2)
from simulate by little algebra u came here , (x1^2+y1^2)=x1*x2+y1*y2
where x1=N,y2=N so putting value of x1 and y2 then,
-> (N^2+y1^2)=N*x2+y1*N
-> N =x2+y1+(y1^2)/N;
So from this equation we get that
(y1^2) is divisible by N
y1 is less than N and (y1^2)/N also less than N
y1 greater than root(N)
So we have to find lowest y1 which is greater than root(N) and closest to it
and divisor of N.Then all the multiple of lowest y1 less than N is valid.
For every y1 there is there is 8 formation is a square.
*/
#define M 10000007
int prime[664589];
ll N;
bool marked[M];
void sieve(long long n)
{
    marked[1]=true;
    for (long long i=3; i*i<=n; i+=2)
        if (marked[i]==false)   // i is a prime
            for(long long j=i*i; j<=n; j+=i+i)
                marked[j]=true;
}
bool isPrime(long long n)
{
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return marked[n] == false;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int j=0,t=1;
    sieve(10000005);
    FOR(i,2,10000005)
    if(isPrime(i))prime[j++]=i;
    while(1)
    {
        scanf("%lld",&N);
        if(N==0)break;
        int sqrN=(int)sqrt(N)+1;
        ll temp=N;
        ll ans=1;
        for(int i=0;i<j&&prime[i]<=sqrN&&temp>1; i++)
        {
            if(temp%prime[i]==0)
            {
                int cnt=1;
                while(temp%prime[i]==0)
                {
                    cnt++;
                    temp/=prime[i];
                }
                cnt/=2;
                FOR(p,1,cnt)
                ans*=prime[i];
                //pr2(cnt,prime[i]);
            }
        }
        //pr(ans);
        //ans=N/ans;
        if(temp!=1)ans*=temp;
        ans=(N/ans)-1;
        ans=ans*8;
        if(ans==0)
            printf("Case %d: Impossible\n",t++);
        else
            printf("Case %d: %lld\n",t++,ans);
    }
    return 0;
}
/*
10002323000
1000343000
1003423400
1000300000
1230000000
1000334000
1003343350
1000003434
1003467000
100000000000000
100000455000000
100000324560000
*/


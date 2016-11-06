#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>
#include<ctime>

#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<utility>
#include<sstream>
#include<bitset>
#include<algorithm>
using namespace std;

#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef map<string, int> msi;
#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define FOR(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define in(x) cin>>x
#define out(x) cout<<(x)
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
#define xx first
#define yy second
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int main()
{
    int T;
    char s[10005];
    scanf("%d",&T);
    REP(t,1,T)
    {
        scanf("%s",&s);
        int l=strlen(s);
        if(s[0]=='W'||s[l-1]=='B')
        {
            printf("IMPOSSIBLE\n");
            continue;
        }
        bool chk=false;
        REP(i,0,l-2)
        {
            if(s[i]=='W'&&s[i+1]=='B')
            {
                chk=true;
                break;
            }
        }
        if(chk)
        {
            printf("2\n");
            vi p;
            FOR(i,1,l-2)
            if(s[i]=='B')
            {
                s[i]='C';
                p.pb(i+1);
            }
            p.pb(l);
            vi q;
            FOR(i,0,l-2)
            if(s[i]=='B'||s[i]=='W')
            {
                s[i]='C';
                q.pb(i+1);
            }
            int l1=p.size();
            int l2=q.size();
            printf("%d",l1);
            FOR(i,0,l1-1)
            printf(" %d",p[i]);puts("");
            printf("%d",l2);
            FOR(i,0,l2-1)
            printf(" %d",q[i]);puts("");
            p.clear();
            q.clear();
        }
        else
        {
            printf("1\n");
            printf("%d",l);
            FOR(i,0,l-1)
            printf(" %d",i+1);puts("");

        }
    }
    return 0;
}

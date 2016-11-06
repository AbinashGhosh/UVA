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

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    int s[6],e[6];
    scanf("%d\n",&T);
    FOR(t,1,T)
    {
        FOR(i,1,4)
        scanf("%d:%d",&s[i],&e[i]);
        FOR(i,1,4)
        s[i]=s[i]*60+e[i];
        //pr3(s[1],s[2],s[4]);
        if(s[2]<s[3]||s[4]<s[1])
            printf("Case %d: Hits Meeting\n",t);
        else
            printf("Case %d: Mrs Meeting\n",t);
    }
    return 0;
}
/*
3
17:47 22:40
06:18 17:04
10:44 17:05
01:11 01:27
03:36 19:02
14:33 15:24
*/

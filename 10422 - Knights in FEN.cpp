
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
typedef  pair <string, pii> psii;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
string str;
map<string,int> dist;

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    str="111110111100 110000100000";
    queue<psii> Q;
    psii u,v;
    Q.push(mp(str,mp(2,2)));
    dist[str]=0;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        if(dist[u.x]>11)break;
        FOR(i,0,7)
        {
            int x=u.y.x+dx[i];
            int y=u.y.y+dy[i];
            if(x>=0&&x<5&&y>=0&&y<5)
            {
                v=u;
                v.x[u.y.x*5+u.y.y]=v.x[x*5+y];
                v.x[x*5+y]=' ';
                if(!dist[v.x])
                {
                    dist[v.x]=dist[u.x]+1;
                    Q.push(mp(v.x,mp(x,y)));
                }
            }
        }
    }
    return 0;
}


/*
3
01011
110 1
01110
01010
00100
10110
01 11
10111
01001
00000
11111
01111
00 11
00001
00000
*/

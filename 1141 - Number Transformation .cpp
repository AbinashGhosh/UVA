/*
State-Space Search with BFS
12135 - Switch Bulbs er motoi onekta
Solution : Calculate Prime Factor(Sieve or Genaral way)
State-Space Search with BFS then ans .
*/

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
vi pf[1002];
int vis[1002];
// Frist Way
void primefac(int n)
{
    int sq=n/2+1,m=n,chk=0;
    FOR(i,2,sq)
    {
        if(n<2)break;
        if(n%i==0){
        while(n%i==0)
        n/=i;
        chk=1;
        pf[m].pb(i);
        //pr(i);
        }
    }
    if(n>1&&chk)pf[n].pb(n);
}
//Second way
void primefac2()
{
    int i,j;
    for(i = 4; i < 1001; i+=2)pf[i].pb(2);
    for(i = 3; i < 1001; i+=2)
        if(pf[i].size()==0)
        for(j = i + i; j < 1001; j += i)
            pf[j].pb(i);

}
void bfs(int s,int t)
{
    queue<int>Q;
    Q.push(s);
    vis[s]=0;
    int u,v;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(int i=pf[u].size()-1;i>=0;i--)
        {
            v=u+pf[u][i];
            if(vis[v]==-1&&v<=1000)
            {
                Q.push(v);
                vis[v]=vis[u]+1;
                if(v==t)return;
            }
        }
    }
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,s,t,tt;
//  For frist way
//    FOR(i,4,1000)
//    {
//        primefac(i);
//    }
    primefac2();
    T=0;
    while(scanf("%d%d",&s,&tt))
    {T++;
        if(s==0&&tt==0)break;
        mem(vis,-1);
        bfs(s,tt);
        printf("Case %d: %d\n",T,vis[tt]);
    }
    return 0;
}


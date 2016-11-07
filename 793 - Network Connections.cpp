//Abinash Ghosh
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
#include <ctime>
#include <cassert>
using  namespace  std;

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

#define PI acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define FORR(i, b, e) for(int i = b; i >= e; i--)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 50000
#define EPS 1e-9
int par[MAX];
void init(int n)
{
    FOR(i,1,n)
    par[i]=i;
}
int find_res(int r)
{
    if(par[r]==r)return r;
    return find_res(par[r]);
}
void Union(int a,int b)
{
    par[find_res(a)]=find_res(b);
}
bool Check(int a,int b)
{
    int u=find_res(a);
    int v=find_res(b);
    return (u==v);
}
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int n,u,v;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        getchar();
        init(n);
        int a=0,b=0;
        char c,buffer[100];
        c=getchar();
        while(c!='\n'&&c!=EOF)
        {
            gets(buffer);
            sscanf(buffer,"%d %d",&u,&v);
            if(c=='c')
                Union(u,v);
            else
            {
                if(Check(u,v))a++;
                else b++;
            }
            c=getchar();
        }
        printf("%d,%d\n",a,b);
        if(T)printf("\n");
    }
    return 0;
}




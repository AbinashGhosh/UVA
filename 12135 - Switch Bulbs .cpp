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
int m,n;
int vis[65536],mask[50];

int setbit(int  N,int pos){return N=N|(1<<pos);}
int toggle(int N,int T){return N=N^T;}
int binarycov(string s)
{
    int ans=0,l=s.length();
    FOR(i,0,l-1)
    ans=ans*2+(s[i]-'0');
    return ans;
}
void bfs()
{
    int u,v;
    queue<int>Q;
    Q.push(0);
    vis[0]=0;
    while(!Q.empty())
    {
        u=Q.front();
        FOR(i,1,m)
        {
            v= toggle(u,mask[i]);
            if(vis[v]==-1)
            {
                Q.push(v);
                vis[v]=vis[u]+1;
            }
        }
        Q.pop();
    }
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,k,pos,q;
    string str;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        scanf("%d%d",&n,&m);
        mem(mask,0);
        FOR(i,1,m)
        {
            scanf("%d",&k);
            FOR(j,1,k)
            {
                scanf("%d",&pos);
                mask[i]=setbit(mask[i],pos);
            }
        }
        printf("Case %d:\n",t);
        mem(vis,-1);
        bfs();
        scanf("%d",&q);
        FOR(i,1,q)
        {
            cin>>str;
            int ans=binarycov(str);
            printf("%d\n",vis[ans]);
        }
        printf("\n");
    }
    return 0;
}



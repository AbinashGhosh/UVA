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
// scanf("%d",&n);
struct node{
    bool endmark;
    int cnt;
    node *next[130];
    node()
    {
        cnt=0;
        endmark=false;
        FOR(i,0,128)next[i]=NULL;
    }
}*root;
void Insert(char *str,int n)
{
    node *curr=root;
    FOR(i,0,n-1)
    {

        int id=str[i]-'a';
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->cnt++;
    curr->endmark=true;
}
bool Search(char *str,int n)
{
    node *curr=root;
    FOR(i,0,n-1)
    {
        int id=str[i]-'a';
        if(curr->next[id]==NULL)return false;
        curr=curr->next[id];
    }
    return curr->endmark;
}
ll ans=0;
void del(node *curr,int n)
{
    int cntt=0;
    FOR(i,0,128)
       if(curr->next[i])
       {
           cntt++;
          del(curr->next[i],n+1);
       }
    if(cntt!=0)
    ans+=((2*(n-1)+1)*cntt*(cntt-1))/2;
    else ans+=((curr->cnt)*(curr->cnt-1))*n;
    delete(curr);
}
int main()
{
    int T,n;
    char s[1002];
    int  t=1;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        ans=0;
        root=new node();
        FOR(i,1,n)
        {
            scanf("%s",s);
            Insert(s,strlen(s));
        }
        del(root,1);
        printf("Case %d: %lld\n",t,ans);
        t++;
    }
	return 0;
}
/*
2
a
b
4
cat
hat
mat
sir
0

*/



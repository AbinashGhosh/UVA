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

char s[50005];
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T,q,r1,r2,c1,c2,r,c,m;
    scanf("%d",&T);
    FOR(t,1,T)
    {
        getchar();
        if(t!=1)getchar();
        scanf("%s%d",s,&q);
        int l=strlen(s);
        printf("Square %d:\n",t);
        FOR(i,1,q)
        {
            scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
            printf("Query %d:\n",i);
            FOR(j,r1,r2)
            {
              FOR(k,c1,c2)
               {
                   r=j,c=k;
                   if(r>l)r=(2*l-r);
                   if(c>l)c=(2*l-c);
                   m=min(r,c);
                   //printf("%d",m);
                   printf("%c",s[m-1]);
               }
               printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
3
abca 2
3 2 5 7
3 2 3 2

Aacc32 1
1 1 8 2

abca 1
1 1 7 7
*/

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
char hor[6][62]={"*****..***..*...*.*****...*...*.*****.*****.***...*****.*...*",
                 "*.....*...*.*...*.*.......*...*.*...*...*...*..*..*...*..*.*.",
                 "*****.*****.*...*.***.....*****.*****...*...*...*.*...*...*..",
                 "....*.*...*..*.*..*.......*...*.*.*.....*...*..*..*...*...*..",
                 "*****.*...*...*...*****...*...*.*..**.*****.***...*****...*.."};
char ver[62][6]=
{"*****",
"*....",
"*****",
"....*",
"*****",
".....",
".***.",
"*...*",
"*****",
"*...*",
"*...*",
".....",
"*...*",
"*...*",
"*...*",
".*.*.",
"..*..",
".....",
"*****",
"*....",
"***..",
"*....",
"*****",
".....",
".....",
".....",
"*...*",
"*...*",
"*****",
"*...*",
"*...*",
".....",
"*****",
"*...*",
"*****",
"*.*..",
"*..**",
".....",
"*****",
"..*..",
"..*..",
"..*..",
"*****",
".....",
"***..",
"*..*.",
"*...*",
"*..*.",
"***..",
".....",
"*****",
"*...*",
"*...*",
"*...*",
"*****",
".....",
"*...*",
".*.*.",
"..*..",
"..*..",
"..*.."
};
int main()
{
    //READ("in.txt");
    //WRITE("Save Hridoy.txt");
//    char s[100];
//    FOR(i,0,62)
//    {
//        scanf("%s",s);
//        printf("\"%s\",\n",s);
//    }
      int n;
      while(true)
      {
          scanf("%d",&n);
          if(n==0)break;
          if(n>0)
          {
              FOR(i,0,4)
              {
                  string str;
                  FOR(j,0,60)
                  FOR(l,0,n-1)str+=hor[i][j];
                  FOR(l,0,n-1)printf("%s\n",str.c_str());
              }
              printf("\n\n");
          }
          else
          {
              n=abs(n );
              FOR(i,0,60)
              {
                  string str;
                  FOR(j,0,4)
                  FOR(l,0,n-1)str+=ver[i][j];
                  FOR(l,0,n-1)printf("%s\n",str.c_str());
              }
              printf("\n\n");
          }
      }
    return 0;
}




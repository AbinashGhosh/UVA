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

int cal(char m)
{
    int n = m;
    int s = 0;
    while(n)
    {
        if(n&1) s += 500;
        else s += 250;
        n >>=1;
    }
    return s;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    char str[10][20];

    scanf("%d\n",&T);
    FOR(t,1,T)
    {
            string left,right;
        FOR(i,0,7)
        gets(str[i]);
        int  vall=0,valr=0;
        int  lpos=-1,rpos=-1;
        FOR(i,0,6)
        {
            FOR(j,0,8)
            {
                if(isupper(str[i][j]))
                {
                    left+=str[i][j];
                    vall+=cal(str[i][j]);
                }
                else if(str[i][j]=='_')
                {
                    lpos=i;
                    break;
                }
            }
            if(lpos>0)break;
        }
        FOR(i,0,6)
        {
            FOR(j,9,17)
            {
                if(isupper(str[i][j]))
                {
                    right+=str[i][j];
                    valr+=cal(str[i][j]);
                }
                else if(str[i][j]=='_')
                {
                    rpos=i;
                    break;
                }
            }
            if(rpos>0)break;
        }
        printf("Case %d:\n",t);
        if((vall<valr&&lpos<rpos)||(vall>valr&&lpos>rpos)||(vall==valr&&lpos==rpos)){
            printf("The figure is correct.\n");continue;}
        for(int i=left.length();i<6;i++)
            left+='.';
        for(int i=right.length();i<6;i++)
            right+='.';
        if(vall<valr)
        {
            printf(".../\\...||........\n");
            printf("../..\\..||........\n");
            printf("./....\\.||.../\\...\n");
            printf("/%s\\||../..\\..\n",left.c_str());
            printf("\\______/||./....\\.\n");
            printf("........||/%s\\\n",right.c_str());
            printf("........||\\______/\n");

        }
        else if(vall>valr)
        {
            printf("........||.../\\...\n");
            printf("........||../..\\..\n");
            printf(".../\\...||./....\\.\n");
            printf("../..\\..||/%s\\\n",right.c_str());
            printf("./....\\.||\\______/\n");
            printf("/%s\\||........\n",left.c_str());
            printf("\\______/||........\n");
        }
        else
        {
            printf("........||........\n");
            printf(".../\\...||.../\\...\n");
            printf("../..\\..||../..\\..\n");
            printf("./....\\.||./....\\.\n");
            printf("/%s\\||/%s\\\n",left.c_str(),right.c_str());
            printf("\\______/||\\______/\n");
            printf("........||........\n");
        }

    }
    return 0;
}

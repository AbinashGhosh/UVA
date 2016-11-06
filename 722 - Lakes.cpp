#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <list>
#include <set>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <sstream>

using namespace std;

#define PI 3.141592653589793
#define INF 1000000007
#define MAX 100007
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define mem(a,b)    memset(a,b,sizeof(a))
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    (a*(b/gcd(a,b)))
#define pb push_back
int dx[]={-1, 0, 1, 0};
int dy[]={ 0, 1, 0,-1};
bool visit[105][105];
char g[105][105],ch;
int cont,r,c;
void dfs(int ir,int ic)
{
    if(ir<0||ir>r||ic<0||ic>c||visit[ir][ic]||g[ir][ic]=='1')
        return;
    cont++;
    visit[ir][ic]=true;
    for(int i=0;i<4;++i)
       dfs(ir+dx[i],ic+dy[i]);
}
int main()
{
    int T,i,j,ir,ic;
    char str[105];
    scanf("%d",&T);
    freopen("in.txt","r",stdin);
    while(T--)
    {
        scanf("%d%d",&ir,&ic);
        getchar();
        i=0;
        memset(visit,false,sizeof(visit));
        while(gets(str)&&strlen(str)>0)
        {
            strcpy(g[i],str);
            i++;
        }
        cont=0;
        r=i-1;
        c=strlen(g[0])-1;
        dfs(ir-1,ic-1);
        printf("%d\n",cont);
        if(T)printf("\n");
    }
    return 0;
}
/*
1

02 01
1001101
0011111
0001001
1100011
1111111
1100110
1110111
7

02 01
1001101
0011111
0001001
1100011
1111111
1100110
1110111

02 01
1001101
0011111
0001001
1100011
1111111
1100110
1110111

01 01
0

01 01
1

05 05
0

01 01
00000000
00000000
00000000

05 05
0001100
0001100
0001100
0001100
0001000
*/


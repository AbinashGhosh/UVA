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
        endmark=false;
        cnt=0;
        FOR(i,0,128)next[i]=NULL;
    }
}*root;
void Insert(char *str,int n)
{
    node *curr=root;
    int id=0;
    FOR(i,0,n-1)
    {
//
//        if(islower(str[i]))id=str[i]-'a';
//        else if(str[i]==' ')id=52;
//        else id=str[i]-'A'+26;
        id=str[i];
        if(id<0)pr(id);
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->endmark=true;
    curr->cnt++;
}
int res;
bool Search(string str,int n)
{
    node *curr=root;
    int id=0;
    FOR(i,0,n-1)
    {
//        if(islower(str[i]))id=str[i]-'a';
//        else if(str[i]==' ')id=52;
//        else id=str[i]-'A'+26;
        id=str[i];
        if(curr->next[id]==NULL)return false;
        curr=curr->next[id];
    }
    if(curr->endmark)res=curr->cnt;
    return curr->endmark;
}
vector<char > name;
int ssp;
void del(node *curr)
{
    if(curr->cnt)
    {
        FOR(i,0,(int)name.size()-1)
        printf("%c",name[i]);
        printf(" %.4lf\n",(curr->cnt*100.0)/(ssp*1.));
    }
    FOR(i,0,128)
       if(curr->next[i]){
            name.pb(i);
          del(curr->next[i]);
            name.pop_back();
       }
    delete(curr);
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    char s[35];
    scanf("%d\n\n",&T);

    FOR(t,1,T)
    {
        root =new node();
        ssp=0;
        string temp;
        while(gets(s))
        {
            if(strlen(s)==0)break;
            Insert(s,(int)strlen(s));
            ssp++;
        }

       // sp.clear();
        del(root);
                if(t!=T)printf("\n");
    }
	return 0;
}


/*
struct node{
    bool endmark;
    int cnt;
    node *next[54];
    node()
    {
        endmark=false;
        cnt=0;
        FOR(i,0,52)next[i]=NULL;
    }
}*root;
void Insert(char *str,int n)
{
    node *curr=root;
    int id;
    FOR(i,0,n-1)
    {
        if(islower(str[i]))id=str[i]-'a';
        else if(str[i]!=' ')id=52;
        else id=str[i]-'A'+26;
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->endmark=true;
    curr->cnt++;
}
int res;
bool Search(string str,int n)
{
    node *curr=root;
    int id;
    FOR(i,0,n-1)
    {
        if(islower(str[i]))id=str[i]-'a';
        else if(str[i]!=' ')id=52;
        else id=str[i]-'A'+26;
        if(curr->next[id]==NULL)return false;
        curr=curr->next[id];
    }
    if(curr->endmark)res=curr->cnt;
    return curr->endmark;
}
void del(node *curr)
{
    FOR(i,0,52)
       if(curr->next[i])
          del(curr->next[i]);
    delete(curr);
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int T;
    char s[32];
    scanf("%d\n\n",&T);
    FOR(t,1,T)
    {
        root =new node();
        int ssp=0;
        vector<string>sp;
        string temp;
        while(gets(s))
        {
            if(strlen(s)==0)break;
            Insert(s,strlen(s));
            ssp++;
            temp=s;
            sp.pb(temp);
        }
        sort(sp.begin(),sp.end());
        int sz=sp.size();
        FOR(i,0,sz-1)
        {
            res=0;
            if(i!=0&&sp[i-1]==sp[i])continue;
            Search(sp[i],(int)sp[i].length());
            printf("%s %.4lf\n",sp[i].c_str(),(res*100.0)/(ssp*1.));
        }
        if(t!=T)printf("\n");
        del(root);
    }
	return 0;
}
*/


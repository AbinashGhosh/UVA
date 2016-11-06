//OM
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <sstream>
#include <algorithm>
using  namespace  std;

#define  x first
#define  y second
#define  pb push_back
#define  mp make_pair
#define  PI (acos(-1.0))
#define  mem(a,b) memset(a,b,sizeof(a))
#define  Sort(x) sort(x.begin(),x.end())
#define  FOR(i, b, e) for(int i = b; i <= e; ++i)
#define  FORR(i, b, e) for(int i = b; i >= e; i--)
#define  FORI(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define  pr(x) cout<<x<<"\n"
#define  prs(x) cout<<x<<" "
#define  pr2(x,y) cout<<x<<" "<<y<<"\n"
#define  pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define  ppr(a) cout<<a.x<<" "<<a.y<<"\n"

typedef  long long ll;
typedef  pair <int, int> pii;
typedef  pair <double , double> pdd;
typedef  vector <int> vi;
typedef  vector <pii> vpii;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction

#define  EPS 1e-9
#define  MAX 100007
#define  MOD 1000000007

// Suffix Array O(n log n) from CP3
string text;
int Rank[MAX],tRank[MAX],lcp[MAX],c[MAX];
int arr[MAX];

void countingSort(int k,int n)
{
    int sum=0,mx = max(300, n);
    memset(c, 0, sizeof c);
    FOR(i,0,n-1) c[i+k<n?Rank[i+k]:0]++;
    FOR(i,0,mx){
        int t = c[i];c[i] = sum;sum += t;
    }
    FOR(i,0,n-1) tRank[c[arr[i]+k <n?Rank[arr[i]+k]:0]++]=arr[i];
    FOR(i,0,n-1) arr[i] = tRank[i];
}
void buildSA(int n)
{
    int r,k;
    FOR(i,0,n-1) Rank[i]=text[i],arr[i] = i;
    for (k = 1; k < n; k <<= 1)
    {
        countingSort(k,n);
        countingSort(0,n);
        tRank[arr[0]] = r = 0;
        FOR(i,1,n-1)
        tRank[arr[i]]=(Rank[arr[i]]==Rank[arr[i-1]]&&Rank[arr[i]+k]==Rank[arr[i-1]+k])?r:++r;
        FOR(i,0,n-1)Rank[i] = tRank[i];
        if (Rank[arr[n-1]]==n-1) break;
    }
}
void kasai(int n)
{
    int k=0,r;lcp[0]=0;
    FOR(i,0,n-1)
    {
        r=Rank[i];
        if(r==n-1) {k=0; continue;}
        int j=arr[r+1];
        while(i+k<n && j+k<n && text[i+k]==text[j+k]) k++;
        lcp[r+1]=k?k--:0;
    }
}

void printSA()
{
    cout << "Suffix Array : \n\n";
    for(int i = 0; i <(int)text.size(); i++)
        cout<<arr[i]<<' '<<lcp[i]<<' '<<text.substr(arr[i])<<endl;
}
int main()
{
    int T,n,k;
    char s[MAX];
    scanf("%d",&T);
    FOR(cs,1,T)
    {
        scanf("%s",s);
        scanf("%d",&k);
        text=s;
        text+="$";
        n=text.size();
        buildSA(n);
        kasai(n);
        printSA();
        ll ans=0,cnt=0;
        FOR(i,1,n-1)
        {
            int len=n-1-arr[i];
            int agelen=n-1-arr[i-1];
            if(len<k)cnt=0;
            else if(lcp[i]<k)
            {
                cnt=0;
                int ache=len-k+1;
                ans=(ans+1LL*ache*(ache-1)/2)%MOD;
            }
            else if(lcp[i]>=k)
            {
                cnt+=agelen-k+1;
                int now=len-k+1;
                ans=(ans+1LL*now*cnt)%MOD;
                ans=(ans+1LL*now*(now-1)/2)%MOD;
            }
        }
        printf("Case #%d: %lld\n",cs,ans);
    }
    return 0;
}


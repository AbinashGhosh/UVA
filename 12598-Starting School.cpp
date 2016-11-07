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

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    vl arr;
    vl giv;
    vector<pair < ll, ll> >  brr;
    ll T,n,k,q,h,b[50005],qr;
    scanf("%lld",&T);
    FOR(t,1,T)
    {
        scanf("%lld%lld%lld",&n,&k,&q);
        arr.pb(0);
        giv.pb(0);
        FOR(i,1,k)
        {
            scanf("%lld",&h);
            giv.pb(h);
            arr.pb(h);
        }
        arr.pb(n+1);
        Sort(arr);
        ll temp=1;
        ll j=0;
        FOR(i,1,k+1)
        {
            ll val=arr[i]-arr[i-1]-1;
            if(val>0){
            brr.pb(mp(temp,val));
            temp=temp+val;
            b[j++]=i;
            }
        }
        //FOR(i,0,k)pr2(brr[i].x,brr[i].y);
        printf("Case %d:\n",t);
        FOR(i,1,q)
        {
            scanf("%lld",&qr);
            if(qr<=k)
            {
                printf("%lld\n",giv[qr]);
                continue;
            }
            ll low=0,high=j-1,mid;
            while(low<=high)
            {
                //pr2(low,high);
                mid=(high+low)/2;
                if((qr-k)<brr[mid].x)
                    high=mid-1;
                else
                    low=mid+1;
            }
            //pr(low);
            ll ans=max(low-1,0ll);
           // pr(ans);
            ll ans2=qr-k-brr[ans].x+1;
            ll ans3=arr[b[ans]-1]+ans2;
            printf("%lld\n",ans3);
        }
        brr.clear();
        arr.clear();
        giv.clear();
    }
    return 0;
}


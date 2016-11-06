#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,k,n[20],i,j,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&n[j]);
        }
        sort(n,n+k);
        l=((k+1)/2)-1;
        printf("Case %d: %d\n",i,n[l]);
    }

    return 0;
}

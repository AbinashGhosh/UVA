#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long int n[10005],i=0,temp,ans,g,k,j;
    while(scanf("%lld",&n[i])!=EOF)
    {
           i++;
        sort(n,n+i);
        g=(int)(i/2);
        if(i%2==1)
        {

           printf("%lld\n",n[g]);
        }
        else
        {
            ans=(n[g]+n[g-1])/2;
            printf("%lld\n",ans);

        }

    }
    return 0;
}


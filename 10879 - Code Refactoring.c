#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,k,i,num[5],j,l;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        k=sqrt(n);
        l=0;
        for(j=2;j<=k+1;j++)
        {
            if(n%j==0)
            {
                num[l]=j;
                num[l+1]=n/j;
                l=l+2;
            }
            if(l==4)
            break;
        }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,n,num[0],num[1],num[2],num[3]);
    }
    return 0;
}

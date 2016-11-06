#include<stdio.h>
int main()
{
    long long int a,b,count,i,n,cas=0;
    while((scanf("%lld%lld",&a,&b))==2&&(a!=-1&&b!=-1))
    {
        cas++;
        count=1;
           n=a;
           while(n!=1)
           {
               if(n%2==1)
               n=3*n+1;
               else
               n=n/2;
               if(n>b)
               break;
               count++;
           }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cas,a,b,count);

    }
    return 0;
}

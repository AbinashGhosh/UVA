#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,n,m[10005],i,j,k,max,d;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        scanf("%lld",&m[i]);
        scanf("%lld",&max);
        a=0;b=0;d=1000001;
        for(j=0;j<i;j++)
          for(k=j+1;k<i;k++)
          {

              if((m[j]+m[k])==max)
              {
                  if(fabs(m[j]-m[k])<d)
                  {
                     d=fabs(m[j]-m[k]);
                     a=m[j];
                     b=m[k];
                  }

              }
          }

        if(a>b)printf("Peter should buy books whose prices are %lld and %lld.\n\n",b,a);
        else printf("Peter should buy books whose prices are %lld and %lld.\n\n",a,b);

    }
    return 0;
}

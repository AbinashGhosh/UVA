#include<stdio.h>
int main()
{
     int n,k,sum,a;
     while(scanf("%d%d",&n,&k)!=EOF)
     {
         sum=n;
         while(n>=k)
         {
             a=n/k;
             n=n%k+a;
             sum=sum+a;
         }
         printf("%d\n",sum);
     }
     return 0;
}

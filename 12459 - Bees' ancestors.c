#include<stdio.h>
int main()
{
    long long int num[85],i,j,n;
    num[0]=1;
    num[1]=1;
    for(i=2;i<81;i++)
    num[i]=num[i-1]+num[i-2];
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        printf("%lld\n",num[n]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long int sum,n,res;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;
        sum=(n*(n+1))/2;
        res=(sum*(sum-1))/6;
        printf("%ld\n",res);
    }
    return 0;
}

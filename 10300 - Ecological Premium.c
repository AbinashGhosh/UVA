#include<stdio.h>
int main()
{
    long int n,x,y,z,k,sum;
    scanf("%ld",&n);
    for(;n>0;n--)
    {
        sum=0;
        scanf("%ld",&k);
        for(;k>0;k--)
        {
            scanf("%ld%ld%ld",&x,&y,&z);
            sum=sum+(x*z);
        }
        printf("%ld\n",sum);
    }
    return 0;
}

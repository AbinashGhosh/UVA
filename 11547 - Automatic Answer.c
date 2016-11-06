#include<stdio.h>
int main()
{
    long long int i,j,k,t;
    scanf("%lld",&t);

    for(;t>0;t--)
    {
        scanf("%lld",&i);
        j=i*315+36962;
        k=(j%100)/10;
        if(k<0)
        k=k*(-1);
        printf("%lld\n",k);
    }

    return 0;
}

#include<cstdio>
#include<iostream>
#include<cmath>
long long coinperm[10005];
void coinchange(long coin)
{
    for(long i=coin; i<=10005; i++)
        coinperm[i]+=coinperm[i-coin];
}
int main()
{
    long dollar,i,cube;
    coinperm[0]=1;
    for(i=1; i<=21; i++)
    {
        cube=i*i*i;
        coinchange(cube);
    }
    while(scanf("%ld",&dollar)==1)
    {
        printf("%lld\n",coinperm[dollar]);
    }
    return 0;
}



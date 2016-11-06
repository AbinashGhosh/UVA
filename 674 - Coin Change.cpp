#include<cstdio>
#include<iostream>
#include<cmath>
unsigned long coinperm[7495];
void coinchange(long coin)
{
    for(long i=coin; i<=7490; i++)
        coinperm[i]+=coinperm[i-coin];
}
int main()
{
    long dollar,i;
    coinperm[0]=1;
    coinchange(1);
    coinchange(5);
    coinchange(10);
    coinchange(25);
    coinchange(50);
    while(scanf("%ld",&dollar)==1)
    {
            printf("%lu\n",coinperm[dollar]);
    }
    return 0;
}

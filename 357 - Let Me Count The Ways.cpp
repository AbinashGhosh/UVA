#include<cstdio>
#include<iostream>
#include<cmath>
unsigned long coinperm[30005];
void coinchange(long coin)
{
    for(long i=coin; i<=30000; i++)
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
        if(coinperm[dollar]!=1)
            printf("There are %lu ways to produce %ld cents change.\n",coinperm[dollar],dollar);
        else
            printf("There is only 1 way to produce %ld cents change.\n",dollar);
    }
    return 0;
}


#include<cstdio>
#include<iostream>
#include<cmath>
unsigned long coinperm[30005];
void coinchange(long coin)
{
    for(long i=coin;i<=30000;i+=5)
        coinperm[i]+=coinperm[i-coin];
}
int main()
{
    double org;
    int dollar,i;
    coinperm[0]=1;
    coinchange(5);
    coinchange(10);
    coinchange(20);
    coinchange(50);
    coinchange(100);
    coinchange(200);
    coinchange(500);
    coinchange(1000);
    coinchange(2000);
    coinchange(5000);
    coinchange(10000);
    while(scanf("%lf",&org)==1)
    {
        dollar=(long)(org*100+0.5);
        if(dollar==0)break;
        printf("%6.2lf%17lu\n",org,coinperm[dollar]);
    }



    return 0;
}

#include <algorithm>
#include <cstdio>
#include <cmath>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long int t,r,j,i,midposition,d,dis[501],mid;

    while(scanf("%ld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%ld",&r);
            for(j=0; j<r; j++)
                scanf("%ld",&dis[j]);
            sort(dis,dis+r);
            midposition=r/2;
            if(r%2==0)
                mid=(dis[midposition-1]+dis[midposition])/2;
            else
                mid=dis[midposition];
            d=0;
            for(j=0; j<r; j++)
                d+=abs(dis[j]-mid);
            printf("%ld\n",d);
        }
    }
    return 0;
}

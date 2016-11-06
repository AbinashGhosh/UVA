#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int prime(long long int i)
{
    for(long long int j=2; j<(long long int)sqrt(i)+1; j++)
            if(i%j==0)
                return 0;
     return 1;
}
int main()
{
    long long int num[78499],value,first;
    long long int i,count=0,j;
    for(i=2; i<=32768; i++)
    {
        for(j=2; j<(int)sqrt(i)+1; j++)
            if(i%j==0)
                break;
        if(j==(int)sqrt(i)+1)
        {
            num[count]=i;
            count++;
        }
    }
    while(scanf("%lld",&value))
    {
        if(value==0)break;
        int cheak=0,pairs=0;
        for(i=0;num[i]<value&&i<count;i++)
        {
            first=value-num[i];
            if(prime(first)==1&&first>1&&first<=(long long int)(value)/2)
            {
                pairs++;
                cheak=1;
            }
        }
        printf("%d\n",pairs);
    }
    return 0;
}


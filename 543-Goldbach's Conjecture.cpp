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
    for(i=2; i<=1000000/2; i++)
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
        int cheak=0;
        for(i=1;num[i]<value&&i<count;i++)
        {
            first=value-num[i];
            if(prime(first)==1&&first>2&&first<=(long long int)(value)/2)
            {
                printf("%lld = %lld + %lld\n",value,num[i],first);
                cheak=1;
                //break;
            }
        }
        if(cheak==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

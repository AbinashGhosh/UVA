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
    long long int num[78499],value,first,numt,firstt;
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
    while(scanf("%lld",&value)==1)
    {

        int cheak=0;
        for(i=0;num[i]<(long long int)((value/2)+1)&&i<count;i++)
        {
            first=value-num[i];
            if(prime(first)==1&&first>1)
            {
                firstt=first;
                numt=num[i];
                cheak=1;
            }
        }
        if(cheak==0)
            printf("%lld is not the sum of two primes!\n",value);
        else if(cheak==1)
            printf("%lld is the sum of %lld and %lld.\n",value,numt,firstt);
    }
    return 0;
}

#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int i,j,k,t,num[20005],tem,sum,a;
    scanf("%llu",&t);
    for(;t>0;t--)
    {
        scanf("%llu",&k);
        for(i=0;i<k;i++)
        {
        scanf("%llu",&num[i]);
        }
       sort(num,num+k);
        sum=0;
        a=k%3;
        for(i=a;i<k;i=i+3)
        {
            sum=sum+num[i];
        }
        printf("%llu\n",sum);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    unsigned long long int N,sum,i,j,k,a;
    while(scanf("%llu",&N)==1)
    {
        a=1;
        for(j=1;j<=N;j+=2)
        {
            sum=0;
            for(k=1;k<=j;k++)
             a+=2;
            sum=3*(a-4);
            if(j==N)
            printf("%llu\n",sum);
        }
    }

    return 0;
}

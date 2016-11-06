#include<stdio.h>
int main()
{
    unsigned long long int N,sum;
    while(scanf("%llu",&N)!=EOF)
    {
       sum=(((((N+1)*(N+1))/4)*2)-3)*3;
       printf("%llu\n",sum);
    }
return 0;
}

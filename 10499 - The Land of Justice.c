#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%ld",&n)==1 && n>=0)
    {
         if(n==1)
            printf("0%%\n");
         else
            printf("%ld%%\n",n*25);
    }
return 0;
}

#include <stdio.h>
int main()
{
    long long int num,res;
    while(scanf("%lld",&num)==1){
        res=((num*(num+1))/2)*((num*(num+1))/2);
     printf("%lld\n",res);

    }
    return 0;
}

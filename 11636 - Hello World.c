#include<stdio.h>
int main()
{
    long int n,i,c=0,count;
    while(scanf("%ld",&n)==1)
    {
        i=1;count=0;
        if(n<0)break;
        while(i<n)
        {
            i=i*2;
            count++;
        }
        c++;
        printf("Case %ld: %ld\n",c,count);
    }
return 0;
}

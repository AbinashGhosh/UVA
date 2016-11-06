#include<cstdio>
#define M 1000000
bool mark[M];
bool sieve()
{
    for(long int i=3;i*i<=M;i+=2)
        if(mark[i]==false)
           for(long int j=i*i;j<=M;j+=i+i)
              mark[j]=true;
}
bool prime(long int n)
{
    if(n<1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    return mark[n]==false;
}
int main()
{
    long int n,s,i,j;
    sieve();
    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;
        s=0;
        for(i=2;i<=n/2;i++)
        {
            if(prime(i)&&prime(n-i))
            {
                printf("%ld:\n%ld+%ld\n",n,i,n-i);
                s=1;
                break;
            }
        }
        if(s==0) printf("%ld:\nNO WAY!\n",n);
    }

    return 0;
}

#include<cstdio>
long long  x,y,d;
void ExtendedEuclid(long long  a,long long  b)
{
    if(b==0)x=1,y=0,d=a;
    else
    {
        ExtendedEuclid(b,a%b);
        long long  x1=x;
        x=y;
        y=x1-y*(a/b);
    }
}
int main()
{
    long long int A,B;
    while(scanf("%lld%lld",&A,&B)==2)
    {
     ExtendedEuclid(A,B);
    printf("%lld %lld %lld\n",x,y,d);
    }
    return 0;
}

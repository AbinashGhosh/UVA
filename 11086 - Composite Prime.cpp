#include<cstdio>
int divisor_check(int n)
{
    int pow,divisor=0;
    for(int i=2;i*i<=n;i=(i==2?3:i+2))
    {
        pow=0;
        while(n%i==0){pow++;n/=i;}
        divisor+=pow;
        if(divisor>2)return 0;
    }
    if(n>1)divisor++;
    return divisor;
}
int main()
{
    long N,i,counts;
    int num;
    while(scanf("%ld",&N)==1)
    {
        counts=0;
        for(i=0;i<N;++i)
        {
            scanf("%d",&num);
            if(divisor_check(num)==2)counts++;
        }
        printf("%ld\n",counts);
    }
    return 0;
}

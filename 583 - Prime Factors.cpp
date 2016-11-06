#include<cstdio>
void divisor_count(long int  n)
{
    long int cas=0;
    for(long int i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                if(cas==1)printf(" x");
                printf(" %ld",i);
                cas=1;
                n/=i;
            }

        }
    }
    if(cas==1&&n!=1)printf(" x");
    if(n!=1)printf(" %ld\n",n);
    else printf("\n");
}
int  main()
{
    long int N;
    while(scanf("%ld",&N))
    {
        if(N==0)break;
        printf("%ld =",N);
        if(N<0)
        {
            printf(" -1 x");
            N=-1*N;
        }
        divisor_count(N);
    }
    return 0;
}

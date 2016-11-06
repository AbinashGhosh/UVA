#include<cstdio>
#include<cmath>
long int divisor_count(long int  n)
{
    long int divisor=1,root=(long int )sqrt(n),pow;
    for(long int i=2; i<=root; i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            pow=0;
            while(n%i==0)
            {
                pow++;
                n/=i;
            }
            divisor*=pow+1;
            root=(long int )sqrt(n);
        }
    }
    if(n!=1)divisor*=2;
    return divisor;
}
int  main()
{
    long int L,U,i,T,MD,temp,num;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld%ld",&L,&U);
        MD=0;
        for(i=L;i<=U;++i)
        {
            temp=divisor_count(i);
            if(temp>MD){ MD=temp;num=i;}
        }
        printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",L,U,num,MD);
    }
    return 0;
}


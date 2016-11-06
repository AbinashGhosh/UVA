#include<stdio.h>
#include<math.h>
int prime(long long int n)
{
    long long int c,i;
    int p=1;
    c=( long long int)sqrt(n)+1;
    for(i=2;i<=c;i++)
      if(n%i==0)
      p=0;
      return p;
}
long long int rev(long long int i )
{
    long long int r=0;
     while(i>0)
    {
        r=(r*10)+(i%10);
        i=i/10;
    }
    return r;
}
int main()
{
    long long int num,p,k,e;

    while(scanf("%lld",&num)==1)
    {
    k=rev(num);
    p=prime(num);
    e=prime(k);
    if(p==0)
    printf("%lld is not prime.\n",num);
    else
    {
        if(e==1&&k!=num)
        printf("%lld is emirp.\n",num);
        else
         printf("%lld is prime.\n",num);
    }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    long int i,a,b,count;
    double r;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        count=0;
        if(a==0&&b==0)break;
        if(a==0)a=1;
        for(i=a;i<=b;i++)
        {
            r=sqrt(i)-(int)sqrt(i);
            if(r==0)
            count++;
        }
        printf("%ld\n",count);
    }
    return 0;
}

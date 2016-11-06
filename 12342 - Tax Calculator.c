#include<stdio.h>
int main()
{
    unsigned long long int t,i;
    double tax,a;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&a);
        if(a<=180000)tax=0;
        else
        {
            if(a>180000&&a<=480000)
            tax=(a-180000)/10;
            else if(a>480000&&a<=880000)
            tax=30000+((a-480000)*15)/100;
            else if(a>880000&&a<=1180000)
            tax=90000+(a-880000)/5;
            else if(a>1180000)
            tax=150000+(a-1180000)/4;
            if(tax<2000)tax=2000;
        }
       if((tax>(unsigned long long int)tax))tax=(unsigned long long int)tax+1;
        printf("Case %llu: %0.lf\n",i,tax);

    }
    return 0;
}

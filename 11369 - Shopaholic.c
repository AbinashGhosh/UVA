#include<stdio.h>
int main()
{
    unsigned long long int i,j,k,t,num[20005],tem,sum;
    scanf("%lld",&t);
    for(;t>0;t--)
    {
        scanf("%llu",&k);
        for(i=0;i<k;i++)
        {
        scanf("%llu",&num[i]);
        }
        for(i=0;i<k;i++)
        {
           for(j=i+1;j<k;j++)
           {
               if(num[i]<num[j])
               {
                tem=num[i];
                num[i]=num[j];
                num[j]=tem;
                }
           }
        }
        sum=0;
        for(i=2;i<k;i=i+3)
        {
            sum=sum+num[i];
        }
        printf("%llu\n",sum);
    }

    return 0;
}

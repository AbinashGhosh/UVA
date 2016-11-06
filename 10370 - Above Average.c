#include<stdio.h>
int main()
{
    int t,num[1010],sum,avg,count,n,i;
    float p;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        sum=0;count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            sum=sum+num[i];
        }
        avg=sum/n;

        for(i=0;i<n;i++)
        {
            if(num[i]>avg)
            count++;
        }

        if(count==0)p=0;
        else
        p=(float)(count*100)/n;
        printf("%.3f",p);
        printf("%c\n",'%');
    }

    return 0;
}

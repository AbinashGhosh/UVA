#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b)
        return gcd(b,a%b);
    return a;
}
int main()
{
    int T,num[55],i,j,counts;
    double ans;
    while(scanf("%d",&T)==1)
    {
        counts=0;
        if(T==0)break;
        for(i=0;i<T;i++)
            scanf("%d",&num[i]);
        for(i=0;i<T;i++)
        {
            for(j=i+1;j<T;j++)
            {
                if(gcd(num[i],num[j])==1)
                    counts++;
            }
        }
        if(counts==0)
            printf("No estimate for this data set.\n");
        else
        {
        ans =sqrt(((T*(T-1))*3.0000000)/counts);
        printf("%.6lf\n",ans);
        }

    }
    return 0;
}

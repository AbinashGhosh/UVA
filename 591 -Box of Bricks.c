#include<stdio.h>
int main()
{
    int n,i,a[60],sum,j,b,count,cas=1;
    scanf("%d",&n);
    while(n)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
             scanf("%d",&a[i]);
             sum=sum+a[i];
        }
        b=sum/n;
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[j]-b>0)
            {
                count=count+(a[j]-b);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",cas++,count);
       scanf("%d",&n);
    }
return 0;
}

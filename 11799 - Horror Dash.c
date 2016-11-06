#include<stdio.h>
int main()
{
    int i,t,n,j,c[10000],max;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        max=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[j]);
            if(c[j]>max)max=c[j];
        }
        printf("Case %d: %d\n",i,max);

    }

return 0;
}

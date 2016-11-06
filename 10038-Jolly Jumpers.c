#include <stdio.h>
int main()
{
    int n=0,i,j=0,a[3001],get[3001],d;
    scanf("%d",&n);
    while(n&&n>0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            get[i]=0;
        }
        j=1;
        for(i=1;i<n;i++)
        {
            d=a[i]-a[i-1];
            if(d<0)
                d=-d;
            if(d!=0&&get[d]==0&&d<n)
                get[d]=1;
            else
            {
                j=0;
                break;
            }
        }
        if(j==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
        n=0;
        scanf("%d",&n);
    }
    return 0;
}

#include<stdio.h>
int a[1000005];
int b[1000005];
int c[1000005];
int main()
{
    int n,k,i,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        scanf("%d%d",&a[i],&b[i]);
        k=0;
        for(i=m-1;i>=0;i--)
        {
            c[i]=(a[i]+b[i]+k)%10;
            k=(int)(a[i]+b[i]+k)/10;
        }
        for(i=0;i<m;i++)
        printf("%d",c[i]);
        printf("\n");
        if(n!=0)
        printf("\n");
    }

    return 0;
}

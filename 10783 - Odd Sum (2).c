#include<stdio.h>
int main()
{
    long int n,x,y,z,k,sum;
    scanf("%ld",&n);
    for(k=1;k<=n;k++)
    {
        sum=0;
        scanf("%d%d",&x,&y);
        for(z=x;z<=y;z++)
        {
            if(z%2==1)
            sum=sum+z;
        }
        printf("Case %d: %d\n",k,sum);
    }
    return 0;
}

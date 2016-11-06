#include<stdio.h>
int main()
{
    int a,b,t,i,j,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a%2==0)a++;
        if(b%2==0)b--;
        for(j=a;j<=b;j+=2)
        sum=sum+j;
        printf("Case %d: %d\n",i,sum);
    }
return 0;
}

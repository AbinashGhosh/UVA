#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d%d",&a,&b);
        c=(a-b)/2;
        if(a<b||(a-b)%2==1)
        printf("impossible\n");
        else
        printf("%d %d\n",c+b,c);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int h,w,l,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&l,&w,&h);
        printf("Case %d: ",i);
        if(l<=20&&w<=20&&h<=20)
        printf("good");
        else
        printf("bad");
        printf("\n");
    }
return 0;
}

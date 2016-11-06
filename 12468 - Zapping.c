#include<stdio.h>
int main()
{
    int a,b,i,j;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1&&b==-1)
        break;
        i=a-b;
        if(i<0)i=i*(-1);
        j=100-i;
        if(i>j)
        printf("%d\n",j);
        else
        printf("%d\n",i);
    }
    return 0;
}

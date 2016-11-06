#include<stdio.h>
int main()
{
    int t,e,f,n,count,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d%d%d",&e,&f,&n);
        a=e+f;
        while(a>=n)
        {
            b=(int)(a/n);
            c=a%n;
            count=count+b;
            a=b+c;
        }
        printf("%d\n",count);
    }
    return 0;
}

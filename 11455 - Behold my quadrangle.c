#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d)
        printf("square");
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&c==b))
        printf("rectangle");
        else if((a+b+c)>d&&(a+b+d)>c&&(a+d+c)>b&&(d+b+c)>a)
        printf("quadrangle");
        else
        printf("banana");
        printf("\n");
    }
    return 0;
}

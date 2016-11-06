#include<stdio.h>
#include<math.h>
int GCD( int n1, int n2)
{
    int num3;

    while(n2>0)
    {
        num3=(n1%n2);
        n1=n2;
        n2=num3;
    }
    return n1;
}
int main()
{
    int h,l,m,n,temp,g;
    while(scanf("%d%d",&l,&h)!=EOF)
    {
         g=GCD(l,h);
         l=l/g;
         h=h/g;
        printf("[");
        printf("%d;",(int)(l/h));
        temp=l%h;
        l=h;
        h=temp;
        while(1)
        {
            m=l/h;
            temp=h;
            h=l%h;
            l=temp;
            if(l==1)
            break;
            printf("%d",m);
            printf(",");

        }
        printf("%d]\n",m*g);
    }
    return 0;
}

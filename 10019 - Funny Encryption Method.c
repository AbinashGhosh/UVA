#include<stdio.h>
#include<math.h>
int basecon(int hd,int b)
{
    int i,sum=0,m;
    for(i=0;hd>0;i++)
    {
        m=hd%10;
        sum=sum+m*pow(b,i);
        hd=hd/10;
    }
    return sum;
}
int main()
{
    int n,t,d,hd,c1,c2;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        d=n;
        c1=0;c2=0;
        hd=basecon(n,16);
        while(d>0)
        {
            if(d%2==1)
            c1++;
            d=d/2;
        }
         while(hd>0)
        {
            if(hd%2==1)
            c2++;
            hd=hd/2;
        }

        printf("%d %d\n",c1,c2);

    }
    return 0;
}

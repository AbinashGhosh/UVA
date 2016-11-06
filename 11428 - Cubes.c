#include<stdio.h>
#include<math.h>
int main()
{

    long int  d,x,c,i,j,k;
    int l;
    while(scanf("%ld",&c)==1)
    {
        if(c==0)break;
        l=0;
        for(i=1;i<=60;i++)
        {
            for(k=1;k<=i;k++)
            {
            j=((i*i*i)-c);
            d=pow(k,3);
            if(j==d)
            {
                printf("%ld %ld\n",i,k);
                l=1;
                break;
            }
            if(l==1)break;
            }
        }
        if(l==0)printf("No solution\n");
    }
    return 0;
}

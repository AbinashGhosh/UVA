#include<stdio.h>
int main()
{
    int t,i,j,a,f;
    scanf("%d",&t);
    for(;t>0;t--)
    {
                scanf("%d%d",&a,&f);
        for(;f>0;f--)
        {
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                printf("%d",i);
                printf("\n");
            }
            for(i=a-1;i>0;i--)
            {
                for(j=1;j<=i;j++)
                printf("%d",i);
                printf("\n");
            }
            if(f>1)printf("\n");

        }
        if(t>1)printf("\n");
    }

    return 0;
}

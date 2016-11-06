#include<stdio.h>
int main()
{
    int i,t,r,a[10],j;
    char w[10][100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        r=0;
        for(j=0;j<10;j++)
        {
           scanf("%s%d",w[j],&a[j]);
           if(a[j]>r)
           {
               r=a[j];
           }
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
        {
            if(a[j]==r)
            printf("%s\n",w[j]);
        }


    }
    return 0;
}

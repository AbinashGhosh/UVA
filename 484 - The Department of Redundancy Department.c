#include<stdio.h>
int a[100000],b[100000];
int main()
{
    int n=0,g,i,v;
    while(scanf("%d",&v)==1)
    {
        g=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==v)
            {
                g=1;
                a[i]=v;
                b[i]++;
                break;
            }
        }
        if(g==0)
        {
                a[n]=v;
                b[n]++;
                n++;
        }
    }
    for(i=0;i<n;i++)
    printf("%d %d\n",a[i],b[i]);
    return 0;
}


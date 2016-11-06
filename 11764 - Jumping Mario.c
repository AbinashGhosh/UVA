#include<stdio.h>
int main()
{
    int i,t,n,w[50],l,h,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        l=0;h=0;
        scanf("%d",&n);
        scanf("%d",&w[0]);
        for(j=1;j<n;j++)
        {
           scanf("%d",&w[j]);
           if(w[j-1]>w[j])
           l++;
           else if(w[j-1]<w[j])
           h++;
        }
        printf("Case %d: %d %d\n",i,h,l);

    }
 return 0;
}


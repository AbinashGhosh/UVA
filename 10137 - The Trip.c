#include<stdio.h>

int main()
{
    int a[1000];
    int i,avg,pos,nag,n,t;
    char c;

    while(1)
    {
        scanf("%d",&n);

        if(n==0) break;

        avg=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&t);
            a[i]=t*100;
            scanf("%c",&c);
            scanf("%d",&t);
            a[i]+=t;
            avg+=a[i];
        }

        avg=((double)avg/n)+0.5;

        pos=0;
        nag=0;

        for(i=0;i<n;i++)
        {
            a[i]-=avg;

            if(a[i]>0)
                pos+=a[i];
            else
                nag-=a[i];
        }

        avg=(pos<nag?pos:nag);

        printf("$%d.",avg/100);
        if(avg%100<10) printf("0");
        printf("%d\n",avg%100);
    }
    return 0;
}

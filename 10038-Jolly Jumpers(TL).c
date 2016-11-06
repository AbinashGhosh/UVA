#include<stdio.h>
int main()
{
    long long t,num[3005],i,k,l,h,p;
    while(scanf("%lld",&t))
    {
            for(i=0; i<t; i++)
            {
                scanf("%lld",&num[i]);
            }
        l=0;
        h=0;
        if(t==1)
        {
            printf("Jolly\n");
            continue;
        }
        else if(t==2)
        {
            k=num[0]-num[1];
            if(k<0)k*=-1;
            if(k==1||k==0)
            printf("Jolly\n");
            else
            printf("Not jolly\n");

                continue;
        }
        k=num[0]-num[1];
        if(k<0)k*=-1;
        p=num[1]-num[2];
        if(p<0)p*=-1;
        if(p==k-1)
            l=1;
        else if(p==k+1)
            h=1;
        else
        {
            printf("Not jolly\n");
            continue;
        }



        for(i=1; i<t-1; i++)
        {
            p=num[i]-num[i+1];
            if(p<0)p*=-1;
            if(l==1)
            {

                if(p==k-1)
                k--;
                else
                {
                    printf("Not jolly\n");
                    break;
                }
            }
            if(h==1)
            {
                if(p==k+1)
                k++;
                else
                {
                    printf("Not jolly\n");
                    break;
                }
            }

        }
        printf("%lld %lld %lld\n",i,k,p);
        if(i==t-1&&(p==1||p==t-1))
        printf("Jolly\n");
        else
        printf("Not jolly\n");
    }
    return 0;
}

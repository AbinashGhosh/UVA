#include<stdio.h>
#include<math.h>
int main()
{
    long long n,i,m,p,h ;
    while(scanf("%lld",&n)&&n!=0)
    {
        m=0;
        h =0;
        p=fabs(n);
        for(i=2;i*i<=p;i++)
        {
            while(n%i==0)
            {
               if(m!=i)
               {
                    h++;
               }
                m=i;
                n/=i;
            }
        }
        if(n!=1&&n!=-1&&n!=p)
        {
            m=fabs(n);
            h++;
        }
        if(h > 1)
        printf("%lld\n", m);

        else
        printf("-1\n");
    }
    return 0;
}

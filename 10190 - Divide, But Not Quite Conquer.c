#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,i,j,num[10000],k;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {


            k=0;j=0;
            num[0]=a;
            while(a>1)
            {
                if(a%b==0)
                {
                a=a/b;
                k++;
                num[k]=a;
                }

                else
                {
                    j=1;
                    break;
                }
            }
        if(j==0)
        {
            printf("%lld",num[0]);
            for(i=1;i<=k;i++)
            printf(" %lld",num[i]);
            printf("\n");
        }
        else
        {
             printf("Boring!\n");
        }

    }
    return 0;
}

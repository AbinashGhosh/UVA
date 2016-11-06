#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,sum,i,j,k,t=1,p=0;

    while(scanf("%d",&num1)==1)
    {
        if(num1==0)
            break;
        for(num2=num1,p=0;num2>=1;num2--)
        {
            for(i=1,sum=0;i<=num2/2;i++)
            {
                if(num2%i==0)
                {
                    sum+=i;
                }
            }
            sum+=num2;

            if(sum==num1)
            {
                printf("Case %d: %d\n",t, num2);
                p=1;
                break;
            }
        }
        if(p==0)
              printf("Case %d: -1\n", t);;

        t++;
    }
    return 0;
}

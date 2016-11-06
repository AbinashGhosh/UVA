#include<stdio.h>
int main()
{
    int N,i,j,k,num[105][105],max,sum;
    while(scanf("%ld",&N)==1)
    {
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
            {
                scanf("%ld",&num[i][j]);
                if(j>0)
                num[i][j]=num[i][j]+num[i][j-1];
            }
            max=-128;
         for(i=0;i<N;i++){
            for(j=0;j<N;j++)
            {
 //               printf("%2d ",num[i][j]);
                sum=0;
               for(k=j;k<N;k++)
               {
                   sum=sum+num[k][i];
                   if(max<sum)
                    max=sum;
               }
            }
 //           puts("");
          }

         printf("%ld\n",max);


    }
    return 0;
}

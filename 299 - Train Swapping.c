#include<stdio.h>
int main()
{
    int N,L,i,j,tr[51],m,n,count,temp;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&L);
        for(j=0;j<L;j++)
        scanf("%d",&tr[j]);
        count=0;
        for(m=0;m<L-1;m++)
        {
            for(n=m+1;n<L;n++)
            {
                if(tr[m]>tr[n])
                {
                    temp=tr[m];
                    tr[m]=tr[n];
                    tr[n]=temp;
                    count++;
                }
            }
        }
    printf("Optimal train swapping takes %d swaps.\n",count);
    }
return 0;
}

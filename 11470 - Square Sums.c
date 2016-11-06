#include<stdio.h>
int main()
{
    int r,c,num[15][15],sum[6],i,j,x,cas=1;
    while(scanf("%d",&r)!=EOF)
    {
        if(r==0)
        break;
        for(i=1;i<=r;i++)
          for(j=1;j<=r;j++)
             scanf("%d",&num[i][j]);


            j=0;
            printf("Case %d:",cas++);
            for(i=1;i<=(r/2);i++)
            {
                sum[i]=0;
                for(x=i;x<=r-j;x++)
                sum[i]=sum[i]+num[i][x]+num[r-j][x];
                for(x=i+1;x<=r-i;x++)
                sum[i]=sum[i]+num[x][i]+num[x][r-j];
                j++;
                printf(" %d",sum[i]);
            }

            if(r%2==1)
            printf(" %d",num[((r-1)/2)+1][((r-1)/2)+1]);
            printf("\n");
    }

    return 0;
}

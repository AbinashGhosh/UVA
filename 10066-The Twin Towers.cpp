#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int  first[105],second[105],i,j,casen=0,m,n;
    int c[105][105];
    while(scanf("%d%d",&m,&n)==2)
    {
        if(m==0&&n==0)break;
        for(i=0; i<m; i++)
            scanf("%d",&first[i]);
        for(j=0; j<n; j++)
            scanf("%d",&second[j]);
        casen++;

        for(i=0; i<=m; i++)
            c[i][0]=0;
        for(j=0; j<=n; j++)
            c[0][j]=0;

        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
            {
                if(first[i-1]==second[j-1])
                    c[i][j]=c[i-1][j-1]+1;
                else if(c[i-1][j]>=c[i][j-1])
                    c[i][j]=c[i-1][j];
                else
                    c[i][j]=c[i][j-1];
            }

        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",casen,c[m][n]);
    }


    return 0;
}

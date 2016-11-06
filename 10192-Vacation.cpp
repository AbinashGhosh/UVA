#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char first[105],second[105],m,n,i,j,casen=0;
    int c[105][105];
    while(gets(first))
    {
        if(strcmp(first,"#")==0)break;
        casen++;
        gets(second);
        m=strlen(first);
        n=strlen(second);

        for(i=0; i<m; i++)
            c[i][0]=0;
        for(j=0; j<n; j++)
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

        printf("Case #%d: you can visit at most %d cities.\n",casen,c[m][n]);
    }


    return 0;
}

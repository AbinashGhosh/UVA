#include <stdio.h>
int main()
{
    int nr[8]={-1,-1,-1,0,0,1,1,1};
    int nc[8]={-1,0,1,-1,1,-1,0,1};
    char grid[105][105];
    int row,col,i,j,k,check;
    while(scanf("%d %d",&row,&col)==2)
    {       getchar();
            if(row==0 && col==0) break;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++) scanf("%c",&grid[i][j]);
                getchar();
        }
        int count=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
               if(grid[i][j]=='*')
                  {   check=1;
                      for(k=0;k<8;k++)
                         if(((i+nr[k])>-1 && (i+nr[k])<row) && ((j+nc[k])>-1 && (j+nc[k]<col)))
                              if(grid[i+nr[k]][j+nc[k]]=='*') check=0;
                        if(check==1) count++;
                  }
        }
        printf("%d\n",count);
    }
    return 0;
}

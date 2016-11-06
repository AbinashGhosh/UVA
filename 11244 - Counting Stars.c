#include<stdio.h>
int main()
{
    int i,j,a,b,count;
    char ch[102][102];
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
        break;
         scanf("%*c");
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            scanf("%*c");
        }

        count=0;

         for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                if(ch[i][j]=='*')
                {
                if(i==1&&j==1&&ch[1][2]=='.'&&ch[2][1]=='.'&&ch[2][2]=='.')
                count++;
                else if(i==1&&j==b&&ch[1][b-1]=='.'&&ch[2][b-1]=='.'&&ch[2][b]=='.')
                count++;
                else if(i==a&&j==1&&ch[a][2]=='.'&&ch[a-1][1]=='.'&&ch[a-1][2]=='.')
                count++;
                else if(i==a&&j==b&&ch[a][b-1]=='.'&&ch[a-1][b]=='.'&&ch[a-1][b-1]=='.')
                count++;
                else if(i==1&&j>1&&j<b&&ch[1][j-1]=='.'&&ch[1][j+1]=='.'&&ch[2][j-1]=='.'&&ch[2][j]=='.'&&ch[2][j+1]=='.')
                count++;
                else if(i==a&&j>1&&j<b&&ch[a][j-1]=='.'&&ch[a][j+1]=='.'&&ch[a-1][j-1]=='.'&&ch[a-1][j]=='.'&&ch[a-1][j+1]=='.')
                count++;
                else if(j==1&&i>1&&i<a&&ch[i][2]=='.'&&ch[i-1][1]=='.'&&ch[i-1][2]=='.'&&ch[i+1][1]=='.'&&ch[i+1][2]=='.')
                count++;
                else if(j==b&&i>1&&i<a&&ch[i][b-1]=='.'&&ch[i-1][b]=='.'&&ch[i-1][b-1]=='.'&&ch[i+1][b]=='.'&&ch[i+1][b-1]=='.')
                count++;
                else if(i>1&&i<a&&j>1&&j<b)
                {
                    if(ch[i][j-1]=='.'&&ch[i][j+1]=='.'&&ch[i-1][j-1]=='.'&&ch[i-1][j]=='.'&&ch[i-1][j+1]=='.'&&ch[i+1][j-1]=='.'&&ch[i+1][j]=='.'&&ch[i+1][j+1]=='.')
                    count++;
                }
                }
            }
        }
        printf("%d\n",count);

    }

    return 0;
}

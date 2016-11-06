#include<cstdio>
#include<cctype>
#include<cstring>
int seen[101][101],ans;
int dr[8]= {-1,-1,-1, 0,+1,+1,+1, 0};
int dc[8]= {-1, 0,+1,+1,+1, 0,-1,-1};
void DFS_visit(int i,int j,int r,int c)
{
    int ir,ic;
    for(int k=0; k<8; ++k)
    {
        ir=i+dr[k];
        ic=j+dc[k];
        if((ir>0&&ir<=r&&ic>0&&ic<=c)&&seen[ir][ic]==(-1))
        {
            ans++;
            seen[ir][ic]=0;
            DFS_visit(ir,ic,r,c);
        }
    }
}
void FloodFill(int r,int c)
{
    for(int i=1; i<=r; ++i)
        for(int j=1; j<=c; ++j)
            if(seen[i][j]==-1)
            {
                ans=1;
                seen[i][j]=0;
                DFS_visit(i,j,r,c);
                for(int k=1; k<=r; ++k)
                    for(int l=1; l<=c; ++l)
                        if(seen[k][l]==0)
                           seen[k][l]=ans;
            }
}
int main()
{
    int T,i,j,x,y,c,r;
    char ch,str[6];
    scanf("%d\n\n",&T);
    while(T--)
    {
        i=1,j=0;
        while(scanf("%c",&ch)==1)
        {
            if(isupper(ch)>0)
            {
                j++;
                if(ch=='W')
                seen[i][j]=-1;
                else
                  seen[i][j]=-2;
            }
            else if(ch=='\n')
            {
                c=j;i++,j=0;
            }
            else
                break;
        }
        r=i-1;
        FloodFill(r,c);
        do
        {
            if(ch=='\n')break;
            x=ch-'0';
            scanf("%c",&ch);
            if(isdigit(ch)>0) x=x*10+(ch-'0');
            scanf("%d",&y);getchar();
            printf("%d\n",seen[x][y]);
        }while(scanf("%c",&ch)==1);
        if(T!=0)printf("\n");

    }
    return 0;
}


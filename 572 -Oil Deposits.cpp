#include<cstdio>
int dr[8]={-1,-1,-1, 0,+1,+1,+1, 0};
int dc[8]={-1, 0,+1,+1,-1, 0,+1,-1};
char seen[101][101];
void DFS_visit(int i,int j,int r,int c)
{
    int ir,ic;
    seen[i][j]='*';
    for(int k=0;k<8;++k)
    {
        ir=i+dr[k];
        ic=j+dc[k];
        if(ir>0&&ir<=r&&ic>0&&ic<=c&&seen[ir][ic]=='@')
            DFS_visit(ir,ic,r,c);
    }
}
int DFS(int r,int c)
{
    int ans=0;
    for(int i=1;i<=r;++i)
        for(int j=1;j<=c;++j)
            if(seen[i][j]=='@')
              ans++,DFS_visit(i,j,r,c);
    return ans;
}
int main()
{
    int m,n,i,j,ans;
    while(scanf("%d",&m)==1)
    {
        if(m==0)break;
        scanf("%d",&n);getchar();
        for(i=1;i<=m;++i){
            for(j=1;j<=n;++j)
                scanf("%c",&seen[i][j]);
            getchar();
        }
        ans= DFS(m,n);
        printf("%d\n",ans);
    }
    return 0;
}

#include<cstdio>
int dx[]={1,-1,0, 0};
int dy[]={0, 0,1,-1};
char G[55][55];
bool visit[55][55];
int r,c,count;
void DFS(int sr,int sc)
{
    if((G[sr][sc]!='#'&&visit[sr][sc]==false))
    {

        visit[sr][sc]=true;
        if(G[sr][sc]=='G')count++;
        for(int i=0;i<4;++i)
            if(G[sr+dx[i]][sc+dy[i]]=='T')
               return;
        for(int i=0;i<4;++i)
            DFS(sr+dx[i],sc+dy[i]);
    }

}
int main()
{
    int i,j,sr,sc,ans;
    while(scanf("%d%d",&c,&r)==2)
    {
        getchar();
        for(i=1;i<=r;++i)
        {
            for(j=1;j<=c;++j)
            {
                scanf("%c",&G[i][j]);
                visit[i][j]=false;
                if(G[i][j]=='P') sr=i,sc=j;
            }
            getchar();
        }

        count=0;
        DFS(sr,sc);
        printf("%d\n",count);
    }

    return 0;
}

#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
#include<string>
using namespace std;
int nr[4]={-1,+0,+0,+1};
int nc[4]={+0,-1,+1,+0};
struct S
{
    int row,col;
    S(int R,int C)
    {
        row=R;
        col=C;
    }
};
int main()
{
    int row,col,numrow,r,c,mines,strow,stcol,endrow,endcol,gr,gc;
    while(scanf("%d%d",&row,&col)==2)
    {
        if(row==0&&col==0)break;
        int dist[row][col];
        memset(dist,0,sizeof(dist));
        scanf("%d",&numrow);
        while(numrow--)
        {
            scanf("%d%d",&r,&mines);
            while(mines--)
            {
                scanf("%d",&c);
                dist[r][c]=1;
            }
        }
        scanf("%d%d%d%d",&strow,&stcol,&endrow,&endcol);
        queue<S>Q;
        Q.push(S(strow,stcol));
        dist[strow][stcol]=1;
        while(Q.size())
        {
            S u=Q.front();
            Q.pop();
            for(int i=0;i<4;i++)
            {
                gr=u.row+nr[i];
                gc=u.col+nc[i];
                if(gr>=0&&gr<row&&gc>=0&&gc<col&&!dist[gr][gc])
                {
                    Q.push(S(gr,gc));
                    dist[gr][gc]=dist[u.row][u.col]+1;
                }
            }
        }
        printf("%d\n",dist[endrow][endcol]-1);

    }
    return 0;
}
/*
10 10
9
0 1 2
1 1 2
2 2 2 9
3 2 1 7
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4
0 0
9 9
0 0
*/

#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int nr[8]={+2,+1,-1,-2,-2,-1,+1,+2};
int nc[8]={+1,+2,+2,+1,-1,-2,-2,-1};
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
    char a1,a2,c;
    int x1,x2,y1,y2,gr,gc,ch;
    while(scanf("%c%d%c%c%d",&a1,&y1,&c,&a2,&y2)==5)
    {
        getchar();
        printf("To get from %c%d to %c%d takes ",a1,y1,a2,y2);
        x1=a1-'a';y1--;
        x2=a2-'a';y2--;
        int dist[8][8];
        ch=0;
        memset(dist,0,sizeof(dist));
        queue<S>Q;
        Q.push(S(x1,y1));
        dist[x1][y1]=1;
        while(!Q.empty())
        {
            S u=Q.front();
            Q.pop();
            for(int i=0;i<8;i++)
            {
                gr=u.row+nr[i];
                gc=u.col+nc[i];
                if(gr>=0&&gr<8&&gc>=0&&gc<8&&!dist[gr][gc])
                {
                    Q.push(S(gr,gc));
                    dist[gr][gc]=dist[u.row][u.col]+1;
                }
                if(gr==x2&&gc==y2)
                {
                  printf("%d knight moves.\n",dist[gr][gc]-1);
                  ch=1;
                  break;
                }
            }
            if(ch==1)break;
        }
    }
  return 0;
}

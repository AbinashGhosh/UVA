#include<cstdio>
int dx[4]={-1,0,1, 0};
int dy[4]={ 0,1,0,-1};
int main()
{
    int r,c,i,j,T,ir,ic,k,d;
    char M[65][65],ch;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&r,&c);
        getchar();
        for(i=1;i<=r;++i)
        {
            for(j=1;j<=c;++j)
                scanf("%c",&M[i][j]);
            getchar();
        }
        scanf("%d%d",&ir,&ic);
        getchar();d=0;
        while(scanf("%c",&ch)==1)
        {
            if(ch=='Q')break;
            if(ch=='L')
                d=(d+3)%4;
            else if(ch=='R')
                d=(d+1)%4;
            else if(ch=='F')
            {
                if(M[ir+dx[d]][ic+dy[d]]!='*')
                {
                    ir+=dx[d];
                    ic+=dy[d];
                }
            }

        }
        if(d==0)ch='N';
        else if(d==1)ch='E';
        else if(d==2)ch='S';
        else if(d==3)ch='W';
        printf("%d %d %c\n",ir,ic,ch);
        if(T!=0)printf("\n");
    }
    return 0;
}

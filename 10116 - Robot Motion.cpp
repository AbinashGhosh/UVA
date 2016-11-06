#include<cstdio>
int dy[4]={ 0,0,1,-1};
int dx[4]={-1,1,0, 0};
int M[12][12];
int main()
{
    char S[12][12];
    int c,r,ic,ir,i,j,d,cn,check;
    while(scanf("%d%d%d",&r,&c,&ic)==3)
    {
        if(c==0&&r==0&&ic==0)break;
        getchar();

        for(i=1;i<=r;++i)
        {
            for(j=1;j<=c;++j)
               scanf("%c",&S[i][j]);
            getchar();
        }
        ir=1,cn=1,check=0;
        while((ic>0&&ic<=c)&&(ir>0&&ir<=r))
        {
                 if(S[ir][ic]=='N')d=0;
            else if(S[ir][ic]=='S')d=1;
            else if(S[ir][ic]=='E')d=2;
            else if(S[ir][ic]=='W')d=3;
            else
            {
                printf("%d step(s)",M[ir][ic]-1);
                printf(" before a loop of %d step(s)\n",cn-M[ir][ic]);
                check=1;
                break;
            }
            S[ir][ic]='A';
            M[ir][ic]=cn++;
            ir+=dx[d];
            ic+=dy[d];

        }
        if(check==1)continue;
        printf("%d step(s)",cn-1);
        printf(" to exit\n");

    }
    return 0;
}

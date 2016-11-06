#include<cstdio>
#include<cstring>
#include <iostream>
using namespace std;
int  fx[53][53];
int dx[5]={0,0,1, 0,-1};
int dy[5]={0,1,0,-1, 0};
int direc(char D)
{
    if(D=='N')return 1;
    else if(D=='E')return 2;
    else if(D=='S')return 3;
    else if(D=='W')return 4;
}
char direc2(int d)
{
    if(d==1)return 'N';
    else if(d==2)return 'E';
    else if(d==3)return 'S';
    else return 'W';
}

int main()
{
    int X,Y,ix,iy,d,cx,cy,check;
    char c,D,str[120];
    scanf("%d%d",&X,&Y);
    while(scanf("%d%d%c%c",&ix,&iy,&c,&D)==4)
    {
        getchar();check=0;
        scanf("%s",str);
        cx=ix,cy=iy;
        d=direc(D);
        for(int i=0;i<strlen(str);++i)
        {
            if(str[i]=='L')
            {
                d--;
                if(d==0)d=4;

            }
            else if(str[i]=='R')
            {
                d++;
                if(d==5)d=1;
            }
            else if(str[i]=='F')
            {
                cx+=dx[d];
                cy+=dy[d];
                if((cx<0||cx>X)||(cy<0||cy>Y))
                {
                    if(fx[cx-dx[d]][cy-dy[d]]==1)
                    {
                        cx-=dx[d];
                        cy-=dy[d];
                        continue;
                    }
                    printf("%d %d %c LOST\n",cx-dx[d],cy-dy[d],direc2(d));
                    fx[cx-dx[d]][cy-dy[d]]=1;
                    check=1;
                    break;
                }
            }
        }
        if(check==1)continue;
        printf("%d %d %c\n",cx,cy,direc2(d));
    }
    return 0;
}

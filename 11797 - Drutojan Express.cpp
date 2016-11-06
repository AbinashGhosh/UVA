#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
using namespace std;
int main()
{
    int T,n,m,k,s;
    char str[4] ,src[4];
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int time[6]={0,0,0,0,0,0};
        queue<int>nam[7];
        scanf("%d%d",&m,&n);
        getchar();
        scanf("%s",src);
        if(!strcmp(src,"Ja"))s=1;
        else if(!strcmp(src,"Sam"))s=2;
        else if(!strcmp(src,"Sha"))s=3;
        else if(!strcmp(src,"Sid"))s=4;
        else s=5;
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&k);
            getchar();
            for(int p=1;p<=k;p++)
            {
                scanf("%s",str);
                if(!strcmp(str,"Ja"))nam[j].push(1);
                else if(!strcmp(str,"Sam"))nam[j].push(2);
                else if(!strcmp(str,"Sha"))nam[j].push(3);
                else if(!strcmp(str,"Sid"))nam[j].push(4);
                else nam[j].push(5);
            }
        }
        if(m<=n)
        {
            time[s]=m;
            n-=(m+2);
        }
        else
        {
            time[s]=n;
            n=0;
        }

        while(n>0)
        {
           int  temp=s;
            s=nam[temp].front();
              nam[temp].pop();
              nam[temp].push(s);

          if(m<=n)
          {
            time[s]+=m;
            n-=(m+2);
          }
          else
          {
            time[s]+=n;
            n=0;
          }
        }
        printf("Case %d:\nJa %d\nSam %d\n",i,time[1],time[2]);
        printf("Sha %d\nSid %d\nTan %d\n",time[3],time[4],time[5]);
    }
    return 0;
}

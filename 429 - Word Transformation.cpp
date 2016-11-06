#include<iostream>
#include<queue>
#include<map>
#include<algorithm>
#include<cstdio>
#include<string>
#include<cstring>
#define MAX 10000
using namespace std;
string str[205];
int k,dist[205],taken[205];
int bfs(string first,string second)
{
    int count,p,m,fil;
    memset(taken,0,sizeof(taken));
    for(p=0; p<k; p++)if(first==str[p])break;
    queue<int>Q;
    taken[p]=1;
    dist[p]=0;
    Q.push(p);
    while(!Q.empty())
    {
        fil=Q.front();
        if(str[fil]==second)return dist[fil];
        Q.pop();
        for(int i=0; i<k; i++)
        {
            count=0;
            if(str[i]!=str[fil]&&str[i].length()==str[fil].length()&&taken[i]==0)
            {
                for(int j=0; j<str[fil].length(); j++)
                    if(str[i][j]!=str[fil][j])
                        count++;
            }
            if(count==1)
            {
                Q.push(i);
                dist[i]=dist[fil]+1;
                taken[i]=1;
            }
        }
    }
    return 0;

}
int main()
{
    int T,res,nl=0;
    char tem[20],t,l[25],input[110];
    string s,first,second;
    scanf("%d",&T);
    getchar();
    getchar();
    while(T--)
    {
        k=0;
        while(gets(input))
        {
            if(!strcmp(input,"*"))break;
            str[k]=input;
            k++;
        }
        if(nl==1)printf("\n");
        nl=1;
        while ( gets (input) && strlen (input) )
        {
            char *pch;
            string a, b;
            pch=strtok(input," ");
            a=pch;
            pch=strtok(NULL," ");
            b=pch;
            cout<<a<<" "<<b;
            printf (" %d\n", bfs (a, b));
        }

    }
    return 0;
}

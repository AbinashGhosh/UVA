#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,ans;
    char line[620],i;
    scanf("%d",&t);
    getchar();
    while(t-- )
    {
        int alpha[256];
        gets(line);
        alpha['M']=alpha['A']=alpha['R']=alpha['G']=alpha['I']=alpha['T']=0;
        for(i=0;line[i]!='\0';i++)
            alpha[line[i]]++;

        alpha['A']/=3;
        ans=alpha['A'];
        alpha['R']/=2;
        ans=min(min(min(min(min(ans,alpha['R']),alpha['M']),alpha['G']),alpha['I']),alpha['T']);

        printf("%d\n",ans);
    }

    return 0;
}


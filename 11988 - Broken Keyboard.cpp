#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include <list>
using namespace std;
char str [1000000];
int main ()
{
    while (scanf("%s",str)!=EOF )
    {
        int len=strlen(str);

        list<char>ans;
        list<char>::iterator it = ans.begin();
        for(int i=0;i<len;i++ )
        {
            if(str[i]=='[' )
                it=ans.begin();
            else if(str [i]==']')
                it=ans.end();
            else
                ans.insert(it,str[i]);
        }
        for (it=ans.begin();it!=ans.end();it++)
            printf("%c",*it);

        printf ("\n");
    }

    return 0;
}

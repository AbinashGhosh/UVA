#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int T,i,j;

    scanf("%d",&T);
    getchar();
    while(T--)
    {
        stack<char>s;
        char ch=' ';
        while(1)
        {
            scanf("%c",&ch);
            if(ch=='\n')break;
            if(s.size()>0)
            {
                if((s.top()=='['&&ch==']')||(s.top()=='('&&ch==')'))
                s.pop();
                else
                s.push(ch);
            }
            else
            s.push(ch);

        }
        if(s.empty())
        printf("Yes\n");
        else
        printf("No\n");

    }
    return 0;
}

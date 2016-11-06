#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,T,num[100]={0};
    char ch=' ',d;
    stack<char> s;
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++)
    {
        scanf("%c",&ch);
        s.push(ch);
        while(!s.empty())
        {
           if(ch!='\n') scanf("%c",&ch);
           s.push(ch);
           if(s.size()>1)
           {
               d=s.top();
               s.pop();
               if(d==s.top())
               {
                   s.pop();
                   if(s.empty())break;
                   j=d-64;
                   num[j]++;
                   d=s.top();
                   j=d-64;
                   num[j]++;
               }
            else
            {
               s.push(d);
            }

        }
        }
        printf("Case %d\n",i);
        for(j=1;j<27;j++)
        {
           if(num[j]!=0) printf("%c = %d\n",j+64,num[j]);
           num[j]=0;
        }
     getchar();

    }


    return 0;
}

#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    int T,num[3],i,j,k;
    char str[20];
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++)
    {
        gets(str);
        k=0;
        for(j=0;j<strlen(str);j++)
        {
            if(isdigit(str[j]))
            {
                num[k]=str[j]-'0';
                k++;
            }
        }
        if(k==1)num[1]=0;
        printf("Case %d: ",i);
        cout<<num[0]*0.5+num[1]*0.05<<"\n";

    }
    return 0;
}

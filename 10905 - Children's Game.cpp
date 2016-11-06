#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
bool myfunction (string i,string j)
{
    return (i+j)>(j+i);
}
int main()
{
    int N;
    string a;
    vector<string> m;
    while(scanf("%d",&N))
    {
        if(N==0)
        break;
        for(int i=0;i<N;i++){
        cin>>a;
        m.push_back(a);}
        sort(m.begin(),m.end(),myfunction);
        for(int i=0;i<m.size();i++)
        cout<<m[i];
        cout<<"\n";
        m.clear();

    }

    return 0;
}

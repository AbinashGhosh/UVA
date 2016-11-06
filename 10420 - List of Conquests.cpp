#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<map>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    vector<string>v;
    map<string,int>source;
    string s,a;
    cin>>n;
    getchar();
    while(n--)
    {
        cin>>s;
        getchar();
        getline(cin,a);
        if(source[s])
        {
            source[s]++;
        }
        else
        {
            source[s]++;
            v.push_back(s);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        string c=v[i];
        cout<<c<<" "<<source[c]<<endl;
    }
    return 0;
}

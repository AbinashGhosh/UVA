#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int main()
{
    string s;
    map<string, int> mapa;
    queue<string> q;
    q.push("");
    int cont = 0;
    while (!q.empty())
    {
        string val = q.front();
        q.pop();
        mapa[val] = cont++;
        if (val.size() == 5) continue;
        char i;
        if(val == "")
            i= 'a';
        else
            i= val[val.size() - 1] + 1;
        for (; i < 'z' + 1; i++)
        {
            q.push(val + i);
        }
    }
    char linea[6];
    while (gets(linea))
    {
        printf("%d\n", mapa[linea]);
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
bool myfunction (int i,int j)
{
    return (i>j);
}
int main()
{
    while(1)
    {
        char str[55],cop[55];
        gets(str);
        if(str[0] == '#')
            break;
        strcpy(cop,str);
        sort(cop,cop+strlen(cop),myfunction);
        if(strcmp(cop,str)==0)
            printf("No Successor\n");
        else
        {
            next_permutation(str,str+strlen(str));
            printf("%s\n",str);
        }

    }
    return 0;
}


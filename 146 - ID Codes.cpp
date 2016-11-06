#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    while(1)
    {
        char str[55];
        gets(str);
        if(str[0] == '#')
            break;
     if(next_permutation(str,str+strlen(str)))
           printf("%s\n",str);
        else
           printf("No Successor\n");

    }
    return 0;
}



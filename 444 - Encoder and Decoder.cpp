#include<cstring>
#include<iostream>
#include<cstdio>
#include<cctype>
#include <algorithm>
using namespace std;
int main()
{
    char input[1000];
    int i,len,n;
    while(gets(input))
    {
        n=0;
        if(isdigit(input[0]))
        {
            len = strlen(input);
            reverse(input, input+len);
            for(i=0; input[i]; i=i+2)
            {
                n=(input[i]-48);
                n=n*10+input[i+1]-48;
                if(n<32)
                {
                    n=n*10+input[i+2]-48;
                    i++;
                }
                printf("%c",n);
            }
        }
        else
            for(i=strlen(input)-1; i>=0; i--)
            {
                int j=input[i];
                while (j>0)
                {
                    printf("%d",j%10);
                    j=j/10;
                }
            }
        printf("\n");
    }
    return 0;
}


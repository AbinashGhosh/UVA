#include <stdio.h>
#include <string.h>
int main()
{
    char a[]={"1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./ "};
    char b []={"`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,. "};
    char s[10000]={0};
    long long int i, j,k;
    while(scanf("%c",&s[0])==1)
    {   for(i=1;;i++)
        {
            scanf("%c",&s[i]);
            if(s[i]=='\n') {
            break;
            }
        }
        for(k=0; k<i;k++)
        {    for(j=0;j<44;j++)
            {
                if(s[k]==a[j]) printf("%c",b[j]);
            }
        }printf("\n");
    }
    return 0;
}

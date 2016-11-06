#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    long int t,i,l,j,r,p,k;
    double sq;
    char a[10005];
    while(scanf("%ld ",&t)==1)
    {

    for(k=0;k<t;k++)
    {
        gets(a);
        l=strlen(a);
        sq=sqrt(l);
        p=(long int)sq;
        if(p!=sq)
        printf("INVALID\n");
        else if(p==sq)
        {
            for(i=0;i<p;i++)
              for(j=0;j<p;j++)
                printf("%c",a[(p*j)+i]);

                printf("\n");
        }
    }

    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char sr[105][105];
    int k=0,maximum=0,i,j,l;
    while(gets(sr[k]))k++;
    for(i=0;i<k;i++)
    {
        l=strlen(sr[i]);
        if(l>maximum)
        maximum=l;
        for(j=l;j<100;j++)
        sr[i][j]=' ';
        sr[i][100]= NULL;
    }

    for(i=0;i<maximum;i++)
    {
       for(j=k-1;j>=0;j--)
        printf("%c",sr[j][i]);

        printf("\n");

    }
    return 0;
}


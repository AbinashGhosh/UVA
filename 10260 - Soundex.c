#include<stdio.h>
#include<string.h>
int main()
{
    char ch[30];
    int n,i,c,k;
    while(scanf("%s",ch)!=EOF)
    {
        n=strlen(ch);
        k=7;
        for(i=0;i<n;i++)
        {
            if(ch[i]=='B'||ch[i]=='F'||ch[i]=='P'||ch[i]=='V')
            c=1;
            else if(ch[i]=='C'||ch[i]=='G'||ch[i]=='J'||ch[i]=='K'||ch[i]=='Q'||ch[i]=='S'||ch[i]=='X'||ch[i]=='Z')
            c=2;
            else if(ch[i]=='D'||ch[i]=='T')
            c=3;
            else if(ch[i]=='L')
            c=4;
            else if(ch[i]=='M'||ch[i]=='N')
            c=5;
            else if(ch[i]=='R')
            c=6;
            else
            c=0;
            if(k!=c&&c!=0)
            printf("%d",c);
            k=c;
        }
        printf("\n");
    }
    return 0;
}

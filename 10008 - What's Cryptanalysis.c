#include<stdio.h>
#include<string.h>
#include<ctype.h>
char text[10000],ch;
long count[130];

int main()
{
    long t,i,f,l,j,max,len,letter,k;
    while(scanf("%d",&t)==1)
    {
        for(i=0; i<t+1; i++)
        {
            gets(text);
            len=strlen(text);
            for(l=0; l<len; l++)
            {
                if(isalpha(text[l]))
                {
                    text[l]=toupper(text[l]);
                    count[text[l]]++;
                }
            }
        }
        f=0;
        for(k=1; k<=26; k++)
        {
            max=0;
            for(j=65; j<=90; j++)
            {
                if(count[j]>max)
                {
                    max=count[j];
                    letter=j;
                }
            }
            if(max==0)break;
            f=1;
            count[letter]=-1;
            printf("%c %ld",letter,max);
            printf("\n");
        }
    }
    return 0;
}

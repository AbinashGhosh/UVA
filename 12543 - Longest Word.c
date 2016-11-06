#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1000005],a[1000005];
        int max=1;
    while(scanf("%s",s)==1)
    {
        if(!strcmp(s,"E-N-D"))
        break;
        int l=strlen(s);
        int c=0,i;
        for(i=0;i<l;i++)
        {
            if(isalpha(s[i])||s[i]=='-')
            continue;
            else
            c++;
        }
        l=l-c;
        if(max<l){
            max=l;
            strcpy(a,s);
        }
    }
    int l=strlen(a),i;
    for(i=0;i<l;i++)
    if(isalpha(a[i])||a[i]=='-')
    printf("%c",tolower(a[i]));
    printf("\n");
    return 0;
}

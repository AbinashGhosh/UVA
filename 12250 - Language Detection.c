#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=1,j;
    while(scanf("%s",a)!=EOF)
    {
        if(strcmp(a,"#")==0)
        break;
        if(strcmp(a,"HELLO")==0)
        printf("Case %d: ENGLISH",i);
         else if(strcmp(a,"HOLA")==0)
        printf("Case %d: SPANISH",i);
         else if(strcmp(a,"HALLO")==0)
        printf("Case %d: GERMAN",i);
         else if(strcmp(a,"BONJOUR")==0)
        printf("Case %d: FRENCH",i);
         else if(strcmp(a,"CIAO")==0)
        printf("Case %d: ITALIAN",i);
         else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        printf("Case %d: RUSSIAN",i);
        else
        printf("Case %d: UNKNOWN",i);
        printf("\n");

        i++;
    }
    return 0;
}

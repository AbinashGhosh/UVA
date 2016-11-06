#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,maxe,cou[150]={0};
    char s[1000],test,ne[100],k[200]={};
    while(gets(s))
    {

       if(strlen(s)==0)break;
        len=strlen(s);j=0;
        s[len]='\0';maxe=0;
        for(i=0;i<len;i++)
        {
            test=s[i];
            if(s[i]>64&&s[i]<91)
               {
                 cou[test]++;
                 if(cou[test]>maxe){
                    maxe=cou[test];
               }
               }

             else if(s[i]>96&&s[i]<123)
             {
             cou[test]++;
             if(cou[test]>maxe){
                    maxe=cou[test];
                          }
             }

        }

        for(i=65;i<150;i++)
        {
            if(cou[i]==maxe)
             printf("%c",i);cou[i]=0;
        }
        printf(" %d\n",maxe);


        maxe=0;
    }
    return 0;
}

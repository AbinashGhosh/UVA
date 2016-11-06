#include<stdio.h>
#include<string.h>
int main()
{
    long int ae,len,q,add,v,i,p;
    char ne[21];
    while((scanf("%s",&ne))!=EOF)
    {
        len=strlen(ne);add=0;
        for(q=0;q<len;q++)
        {
            if(isupper(ne[q])>0)
            {
                v=ne[q]-38;
                add=add+v;
            }
            else
            {
                v=ne[q]-96;
                add=add+v;
            }
        }
        p=1;
        for(i=2;i<=add/2;i++)
        {
            if((add%i)==0)
            p=0;
        }
        if(p==1)
        printf("It is a prime word.\n");
        else
        printf("It is not a prime word.\n");

    }
    return 0;

}

#include<stdio.h>
#include<ctype.h>
int main()
{
    int t,i,j,num,k;
    char c,m=' ';
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
        num=0;k=0;
        while(c=getchar())
        {
            if(c=='\n')
            {
                for(j=1;j<=num;j++)
                printf("%c",m);
                break;
            }
            if(isalpha(c))
            {
                if(k==0){printf("Case %d: ",i);k=2;}
                for(j=1;j<=num;j++)
                printf("%c",m);
                num=0;m=c;
            }
            else if(isdigit(c))
            num=num*10+(c-'0');
        }
        printf("\n");

    }
    return 0;
}

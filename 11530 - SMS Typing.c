#include<stdio.h>
int main()
{
    int t,i,sum;
    char c;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        sum=0;
        while(scanf("%c",&c)!=EOF)
        {
            if(c=='\n')break;
            if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ')
            sum=sum+1;
            else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x')
            sum=sum+2;
            else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y')
            sum=sum+3;
            else if(c=='s'||c=='z')
            sum=sum+4;

        }
        printf("Case #%d: %d\n",i,sum);

    }
    return 0;
}

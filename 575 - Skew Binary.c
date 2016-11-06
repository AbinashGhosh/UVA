#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,j,sum,r;
    char c[50];
    while(scanf("%c",&c[1])!=EOF)
    {
        if(c[1]=='0')
        break;
        i=1;
        while(c[i]!='\n')
        {
            i++;
            scanf("%c",&c[i]);
        }
        sum=0;r=1;
        for(j=i-1;j>0;j--)
        {
            k=c[j]-'0';
            sum=sum+k*(pow(2,r)-1);
            r++;
        }
        printf("%d\n",sum);
    }

    return 0;
}

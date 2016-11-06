#include<stdio.h>
int gcd(int a,int b)
{
    if(b)
        return gcd(b,a%b);
    return a;
}
int main()
{
    int num1[105],t,i,j,k,m,l;
    char num[105];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(num);
        i=0;
        j=0;
        m=1;
        while(num[i])
        {
            num1[j]=0;
            while(num[i]&&num[i]!=' ')
                num1[j]=num1[j]*10+num[i++]-'0';
            while(num[i]==' ')
                i++;
            j++;
        }

        for(i=0;i<j;i++)
            for(k=i+1;k<j;k++)
            {
                l=gcd(num1[i],num1[k]);
                if(l>m)
                m=l;
            }
        printf("%d\n",m);
    }
    return 0;
}


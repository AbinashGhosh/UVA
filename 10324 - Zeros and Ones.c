#include<stdio.h>
char s[1000000];
int main()
{
    long int n,i,c=1,a,b,max,min,o,k,t;
    char h;
    while(scanf("%s",s)!=EOF)
    {
        t=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld%ld",&a,&b);
            if(t==0){printf("Case %ld:\n",c);t=1;}
            max=a>b?a:b;
            min=a<b?a:b;
            h=s[min];
            o=0;
            for(k=min;k<=max;k++)
            {
                if(s[k]!=h)
                o=1;
            }
            if(o==0)
            printf("Yes\n");
            else
            printf("No\n");
        }
        c++;
    }
    return 0;
}

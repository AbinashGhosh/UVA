#include<stdio.h>
int main()
{
    int i,j,k,t,n,count,m;
    char str[501];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        scanf("%d%d",&n,&k);
        getchar();
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
            for(m=1;m<=k;m++)
              if(j-m>=0)
                if(str[j-m]==str[j])
                {
                    count++;
                    break;

                }
        }
        printf("Case %d: %d\n",i,count);

    }
    return 0;
}

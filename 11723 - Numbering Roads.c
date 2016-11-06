#include<stdio.h>
int main()
{
    int t=0,r,i,n,s;
    while(scanf("%d%d",&r,&n)==2)
    {
        if(r==0&&n==0)break;
        s=(r-n)/n;;t++;
        if(r>=n&&r%n!=0)s++;

            if(s<=26)
            printf("Case %d: %d\n",t,s);
            else
            printf("Case %d: impossible\n",t);

    }
return 0;

}

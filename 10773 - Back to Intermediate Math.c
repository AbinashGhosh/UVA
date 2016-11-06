#include<math.h>
#include<stdio.h>
int main()
{
    int cases,c, d, v, u;
    scanf("%d",&cases);

    for(c=1; c<=cases;c++ )
    {
        scanf("%d %d %d",&d,&v,&u);
        printf("Case %d: ",c);
        if(v<u &&u!=0&&v!=0)
            printf("%.3lf\n", d /sqrt(u*u - v*v) - d / (double)(u));
        else printf("can't determine\n");
    }
    return 0;
}

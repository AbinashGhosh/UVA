#include<cstdio>
#include<cmath>
int main()
{
    double ha,hb,hc,s,A;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;)
    {
        scanf("%lf%lf%lf",&ha,&hb,&hc);
        A=(1/(((1/ha)+(1/hb)+(1/hc))*(-(1/ha)+(1/hb)+(1/hc))*((1/ha)-(1/hb)+(1/hc))*((1/ha)+(1/hb)-(1/hc))));
        if(A>0)
        printf("%.3lf\n",sqrt(A));
        else
        {
           printf("These are invalid inputs!\n");
           i++;
        }
    }

    return 0;
}

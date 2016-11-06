#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,a,s,t;
    int c,k=0;
    while(scanf("%d",&c)==1)
    {
        if(c==0)break;k++;
        if(c==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=((v+u)*t)/2;
            printf("Case %d: %.3lf %.3lf\n",k,s,a);
        }
        else if(c==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
             s=((v+u)*t)/2;
            printf("Case %d: %.3lf %.3lf\n",k,s,t);
        }
         else if(c==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",k,v,t);
        }
         else if(c==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=s/((v+u)/2);
            printf("Case %d: %.3lf %.3lf\n",k,u,t);
        }
    }
    return 0;
}

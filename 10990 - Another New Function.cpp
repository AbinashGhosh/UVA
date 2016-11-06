#include<cstdio>
#define M 2000001
int phi[M];
int D[2000001];
long long SD[2000001];
void calculate_phi()
{
    for(int i=1;i<M;++i)
        phi[i]=i;
    for(int p=2;p<M;++p)
        if(phi[p]==p)
           for(int k=p;k<M;k+=p)
              phi[k]-=phi[k]/p;
}

int main()
{
    long step,k,T,U,L;
    calculate_phi();
    D[2]=1;D[1]=0;SD[1]=0;
    for(int i=2;i<=2000000;++i)
    {
        k=phi[i];step=1;
        while(k!=1)
        {
            if(D[k]!=0)break;
            step++;
            k=phi[k];
        }
        D[i]=D[k]+step;
        SD[i]=D[i]+SD[i-1];
    }
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld%ld",&L,&U);
        printf("%lld\n",SD[U]-SD[L-1]);
    }


    return 0;
}

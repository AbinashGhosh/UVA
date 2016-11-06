#include<stdio.h>
#include<math.h>
#include<string.h>
long int gcd(long int a,long int b)
{
    if(b)
        return gcd(b,a%b);
    return a;
}
int main()
{
    long int t,bl,gl,bf,gf,i,j,k;
    char b[40],g[40];
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s%s",b,g);
        bl=strlen(b);
        gl=strlen(g);
        bf=0;gf=0;
        k=bl-1;
        for(j=0;j<bl;j++)
        {
            if(b[j]=='1')
            bf=bf+pow(2,k);
            k--;
        }
        k=gl-1;
        for(j=0;j<gl;j++)
        {
            if(g[j]=='1')
            gf=gf+pow(2,k);
            k--;
        }
        if(gcd(bf,gf)!=1||(bf==1&&gf==1))
        printf("Pair #%ld: All you need is love!\n",i);
        else
        printf("Pair #%ld: Love is not all you need!\n",i);
    }
    return 0;
}

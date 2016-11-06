#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct fact
{
    long factors,order;
};
bool cmp(fact x,fact y)
{
    if(x.factors==y.factors)
        return x.order<y.order;
    else
        return x.factors<y.factors;
}
vector<fact>numfact;
long factor_count(long n)
{
    long factor=0,pow;
    for(long i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(n%i==0)
        {
            pow=0;
            while(n%i==0)
            {
                pow++;
                n/=i;
            }
            factor+=pow;
        }
    }
    if(n!=1)factor++;
    return factor;
}
int main()
{
    long N,i,num,cas=0;
    fact K;
    for(i=1;i<=2000000;++i)
    {
        num=factor_count(i);
            K.factors=num;K.order=i;
            numfact.push_back(K);
    }
    sort(numfact.begin(),numfact.end(),cmp);
    while(scanf("%ld",&N)==1)
    {
        if(N==0)break;
        printf("Case %ld: ",++cas);
        cout<<numfact[N-1].order<<"\n";

    }
    return 0;
}

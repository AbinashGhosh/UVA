#include<cstdio>
#include<queue>
using namespace std;
struct data
{
    long long int cost;
    bool operator<(const data& p)const
    {
        return cost>p.cost;
    }
};
int main()
{
    long long int i,j,k,t,num,sum;
    data N,a,b,c;
    while(scanf("%lld",&k)==1&&k>0)
    {
        sum=0;
        priority_queue<data>Q;
        for(i=0;i<k;i++)
        {
            scanf("%lld",&num);
            N.cost=num;
            Q.push(N);
        }
        for(i=1;i<k;i++)
        {
           a=Q.top();
           Q.pop();
           b=Q.top();
           Q.pop();
           c.cost=a.cost+b.cost;
           sum=sum+c.cost;
           Q.push(c);

        }
        printf("%lld\n",sum);
    }

    return 0;
}


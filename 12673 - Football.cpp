#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
int main()
{
    long long N,G,S,R,i,count,CF,res,M,sum;
    vector<long long> D;
    while(scanf("%lld%lld",&N,&G)==2)
    {
        count=0;CF=0;res=0;M=0;
        for(i=1;i<=N;i++)
        {
            scanf("%lld%lld",&S,&R);
            sum=R-S;
            if(sum==0)count++;
            else if(sum>0){D.push_back(sum+1);M+=(sum+1);}
            else res+=3;
        }
        sort(D.begin(),D.end());

            if(G>count)
            {
                G=G-count,res+=count*3;
                if(G>=M)
                {
                    res+=3*(long long)D.size();
                }
                else
                {
                    int k=0;
                    while(G>=0)
                    {
                        G=G-D[k];
                        if(G>=0)
                        {
                            res+=3;
                            k++;
                        }
                        else
                            break;
                    }
                    G=G+D[k];
                    G=G-(D[k]-1);
                    if(G>=0)
                        res+=1;

                }
            }
            else
            {
               res+=G*3;
               count-=G;
               res+=count;
            }

        printf("%lld\n",res);
        D.clear();
    }
    return 0;
}

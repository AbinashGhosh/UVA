#include<stdio.h>
int main()
{
    long B,P,M,R,mod[50000];
    int c,n;
    while(scanf("%ld%ld%ld",&B,&P,&M)==3)
    {
        if(!(B%M))
        n=0;
        else if(!P)n=1;
        else
        {
            c=1;
            R=mod[0]=B=B%M;

            do
            {
                R=mod[c++]=(R*B)%M;
            }
            while(R!=mod[0]);
            c--;
            n=mod[P%c-1];
        }
        printf("%ld\n",n);
    }
    return 0;
}

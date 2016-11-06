#include<stdio.h>
int GCD(int a,int b)
{
    int temp,c=1;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    c=b%a;
    while(c)
    {
        b=a;
        a=c;
        c=b%a;
    }
    return a;
}
int main()
{
    int G,i,j,N;
    while(scanf("%d",&N)==1&&N!=0)
    {


    G=0;

for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)

{

    G+=GCD(i,j);

}
printf("%d\n",G);
}
return 0;
}

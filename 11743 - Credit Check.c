#include<stdio.h>
int main()
{
    int num[16],i,sum1,sum,a,c,j,t;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
    for(i=0;i<16;i++)
    {
        scanf("%1d",&num[i]);
        if((i+1)%4==0)
        scanf("%c",&ch);
    }
    sum1=0;sum=0;
    for(i=1;i<16;i=i+2)
    {
        sum1=sum1+num[i];
    }
    for(i=0;i<15;i=i+2)
    {
        a=num[i]*2;
        if(a>9)
        {
            c=a%10;
            sum=sum+1+c;
        }
        else
        sum=sum+a;
    }
    if((sum1+sum)%10==0)
    printf("Valid\n");
    else
    printf("Invalid\n");
    }
return 0;
}


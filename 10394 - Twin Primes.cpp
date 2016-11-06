#include<stdio.h>
#include<math.h>
int prime(long long int num)
{
    long long int a,c;
    c=(int)sqrt(num)+1;
    for(a=2;a<=c;a++)
    {
        if(num%a==0)
        return 0;
        else if(a==c)
        return 1;
    }
    return 1;
}

int main()
{
    long long int i,num[100003],j=1,input,k=0;
    num[0]=3;
    for(i=3;i<2000000;i++)
    if(prime(i)==1&&prime(i+2)==1)
    {
           num[k]=i;
        k++;
        i++;
    }

    while(scanf("%lld",&input)!=EOF)
    {


    printf("(%lld, %lld)\n",num[input-1],num[input-1]+2);
    }


    return 0;
}



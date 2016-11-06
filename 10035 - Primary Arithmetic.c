#include<stdio.h>
int main()
{
    unsigned long long int a,b,i,j,count,k;
    while(scanf("%llu%llu",&a,&b)==2)
    {
        if(a==0&&b==0)
        break;
        count=0;k=0;
        while(a!=0||b!=0)
        {
            j=(a%10)+(b%10)+k;

            if(j>9)
            {
                count++;
                k=1;
            }
            else
            k=0;
            if(a!=0)
            a=(unsigned long long int)a/10;
            if(b!=0)
            b=(unsigned long long int)b/10;
        }
        if(count==1)
        printf("%llu carry operation.\n",count);
        else if(count>1)
        printf("%llu carry operations.\n",count);
        else if(count==0)
        printf("No carry operation.\n");

    }
    return 0;
}

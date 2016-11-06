#include<stdio.h>
int main()
{
    unsigned long long int a[25],b[25],i,j,t,max,min;
    char ch[20];
    scanf("%llu",&t);
    for(;t>0;t--)
    {
        for(i=0;;i++)
        {
            scanf("%llu%c",&a[i],&ch[i]);
            b[i]=a[i];
            if(ch[i]=='\n')
            break;

        }

        for(j=0;j<i;j++)
        {
            if(ch[j]=='+')
            {
                a[j+1]=a[j]+a[j+1];
                a[j]=1;
            }

        }
        for(j=0;j<i;j++)
        {
            if(ch[j]=='*')
            {
                b[j+1]=b[j]*b[j+1];
                b[j]=0;
            }

        }
        max=1;min=0;
        for(j=0;j<=i;j++)
        min=min+b[j];
        for(j=0;j<=i;j++)
        max=max*a[j];
        if(max>min)
        printf("The maximum and minimum are %llu and %llu.\n",max,min);
        else
        printf("The maximum and minimum are %llu and %llu.\n",min,max);
    }

    return 0;
}

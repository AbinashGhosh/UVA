#include<stdio.h>
#include<string.h>
int main()
{
    char c[120],b[120];
    int a,i,j,l,k,h,m;
    while(scanf("%d",&m)&&m!=0)
    {
        i=0;
        scanf("%s",c);
        j=strlen(c);
        a=j/m;
        while(i<=j)
        {
            h=i;
            k=i+a-1;
            for(l=h;l<i+a;l++)
            {
                b[k]=c[l];
                k--;
            }
            i=i+a;
        }
        for(i=0;i<j;i++)
        printf("%c",b[i]);
        printf("\n");
    }
    return 0;
}

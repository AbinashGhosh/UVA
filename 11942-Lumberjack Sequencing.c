#include<stdio.h>
int main()
{
    int n,m[12],i,j,k,l,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[0]);
        k=0;l=0;
        for(j=1;j<10;j++)
        {
            scanf("%d",&m[j]);
            if(m[j-1]>=m[j])
            k++;
            if(m[j-1]<=m[j])
            l++;
        }
        if(p==0){
            printf("Lumberjacks:\n");p=1;}
        if(k==9||l==9)
        printf("Ordered\n");
        else
        printf("Unordered\n");
    }

    return 0;
}

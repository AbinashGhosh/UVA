#include<cstdio>
int main()
{
    long int i,j,c;
    while(scanf("%d",&i)!=EOF)
    {
        j=1;c=1;
        while(j%i!=0)
        {
            j=(j*10)+1;
            j=j%i;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}

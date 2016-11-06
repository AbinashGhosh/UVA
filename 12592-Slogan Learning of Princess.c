#include<stdio.h>
#include<string.h>
int main()
{
    int N,Q,i,j;
    char sol[44][101],fir[101][101];
    scanf("%d",&N);

        getchar();
        for(i=0;i<N*2;i++)
        gets(sol[i]);
        scanf("%d",&Q);
        getchar();
        for(i=0;i<Q;i++)
        gets(fir[i]);
        for(i=0;i<Q;i++)
        {
            for(j=0;j<N*2;j=j+2)
            {
                        //printf("Hgvdskfy3\n");

                if(strcmp(sol[j],fir[i])==0){
                printf("%s\n",sol[j+1]);
                break;}
            }
        }


    return 0;
}

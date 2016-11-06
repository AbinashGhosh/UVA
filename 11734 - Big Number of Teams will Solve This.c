#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,k,l,nl;
    char j[150],c[150],n[150],m[150];
    scanf("%d\n",&t);

    for(i=1;i<=t;i++)
    {

       gets(c);
       gets(j);

       if(strcmp(c,j)==0)
       {
           printf("Case %d: Yes\n",i);
       }
       else
       {
          k= strlen(c);
          nl=0;
          for(l=0;l<k;l++)
          {
             if(c[l]!=' ')
             {
             n[nl]=c[l];
             nl++;
             }

          }
          n[nl]='\0';
          k= strlen(j);
          nl=0;
          for(l=0;l<k;l++)
          {
             if(j[l]!=' ')
             {
             m[nl]=j[l];
             nl++;
             }

          }
          m[nl]='\0';
          if(strcmp(n,m)==0)
          printf("Case %d: Output Format Error\n",i);
          else
          printf("Case %d: Wrong Answer\n",i);

        }


    }

    return 0;
}

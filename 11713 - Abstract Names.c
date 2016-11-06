#include<stdio.h>
#include<string.h>
int main()
{
    char f[25],g[25];
    int i,j,k,t,l;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%s %s",f,g);
        l=0;
        j=strlen(f);
          k=strlen(g);
          if(j==k)
          {
              for(i=0;i<j;i++)
              {
                  if(f[i]=='a'||f[i]=='e'||f[i]=='i'||f[i]=='o'||f[i]=='u')
                  {
                     if(g[i]!='a'&&g[i]!='e'&&g[i]!='i'&&g[i]!='o'&&g[i]!='u')
                     {
                         printf("No\n");l=1;
                         break;
                     }

                  }
                  else
                  {
                      if(f[i]!=g[i])
                      {
                           printf("No\n");l=1;
                           break;
                      }

                  }


              }
              if(l==0)
              printf("Yes\n");
          }
          else
          printf("No\n");

    }
    return 0;
}

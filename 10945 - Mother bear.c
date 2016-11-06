#include<stdio.h>
#include<ctype.h>
int main()
{
    char p,a,f[200],k[200];
    int i,j,l;
    while(1)
    {
        i=0;a=0;
       while(scanf("%c",&p)==1)
       {
           if(p=='\n')break;
           if(isalpha(p)>0)
           {
              f[i]=p;
              i++;
           }
           else
           a=1;
       }
       if(i==4&&a==0)
          if(f[0]=='D'&&f[1]=='O'&&f[2]=='N'&&f[3]=='E')
             break;
       for(j=0;j<i;j++)
       {
          f[j]=tolower(f[j]);
          k[i-j-1]=f[j];
       }
       l=0;
       for(j=0;j<i;j++)
       {
           if(f[j]==k[j])
           l++;
       }
       if(l==i)
       printf("You won't be eaten!\n");
       else
       printf("Uh oh..\n");
    }
    return 0;
}

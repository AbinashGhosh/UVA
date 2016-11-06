#include<stdio.h>
int main()
{
    int num[1003],i,j,count,tem,h;
    char c;
    while(scanf("%d",&count)==1)
    {
      for(i=0;i<count;i++)
          scanf("%d",&num[i]);
      h=0;
      for(i=0;i<count;i++)
      {
          for(j=i+1;j<count;j++)
          {
              if (num[i]>num[j])
                {
                 h++;
                }
          }
      }

      printf("Minimum exchange operations : %d\n",h);
    }
return 0;
}


#include<stdio.h>
#include<ctype.h>
#include <string.h>
char m,p;
int main()
{
    while(scanf("%c",&m)==1)
    {
          if(isalpha(m))
          {
                if(m=='A'||m=='E'||m=='I'||m=='O'||m=='U'||m=='a'||m=='e'||m=='i'||m=='o'||m=='u')
                {
                    while(isalpha(m))
                    {
                        putchar(m);
                        m=getchar();
                    }
                    printf("ay");
                }
                else
                {
                    p=m;
                    m=getchar();
                    while(isalpha(m))
                    {
                        putchar(m);
                        m=getchar();
                    }
                    printf("%cay", p);
                }
          }
          putchar(m);
    }
    return 0;
}

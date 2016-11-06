#include<stdio.h>
unsigned long long int rev(unsigned long long int i,unsigned long long int r)
{
 if(i > 0)
  return rev(i/10,(r*10)+(i%10));
 return r;
}
int main()
{
    unsigned long long int a,t,n,b,r,nr,count;
    scanf("%llu",&t);
    for(a=0;a<t;a++)
    {
        count=0;
        scanf("%llu",&n);
        while(1)
        {
            nr=rev(n,0);
            if(n==nr)
            {
             break;
            }
            else
            {
                n+=nr;
                count++;
            }


         }
         printf("%llu %llu\n",count,nr);
     }
return 0;
}


#include<stdio.h>
void main()
{
long int i,x,y,n,sum,count=0;

while((scanf("%ld",&n))==1)
{
    if(count==0)
    printf("PERFECTION OUTPUT\n");
     if(!n){
         printf("END OF OUTPUT\n");
          return 0;
          }

sum=0;
for(i=1;i<n;i++)
{
if(n%i==0)
sum+=i;
}
if(sum>n)
printf("%5ld  ABUNDANT\n",n);
else if(sum<n)
printf("%5ld  DEFICIENT\n",n);
else if(sum==n)
printf("%5ld  PERFECT\n",n);
count++;
}
}

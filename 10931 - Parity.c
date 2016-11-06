#include<stdio.h>
int main()
{
 long long int n,i,j;
 int num[64],count;
 while(scanf("%lld",&n)==1)
 {
     if(n==0)break;
     count=0;
     for(i=0;n>0;i++)
     {


         num[i]=n%2;
         if(n%2==1)count++;
         n=n/2;

     }
     printf("The parity of ");
     for(j=i-1;j>=0;j--)
     printf("%d",num[j]);
     printf(" is %d (mod 2).\n",count);

 }


 return 0;
}



#include<stdio.h>
void ternary(long long);
int main()
{
 long long n;

 while(scanf("%lld",&n)&&n>=0)
 {
 ternary(n);
 printf("\n");
 }
 return 0;
}

void ternary(long long n)
{
 if(n>2)
  ternary(n/3);
 printf("%lld",n%3);
}

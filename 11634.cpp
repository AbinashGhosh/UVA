#include<stdio.h>
int main()
{
	int t,n,x,min,max;
	scanf("%d",&t);

	for(int i=0;i<t;i++){
		scanf("%d",&n);
		scanf("%d",&x);
		min=max=x;
		for(int j=1;j<n;j++)
		{
			if(scanf("%d",&x) == EOF)
				break;
			if(x<min)
				min=x;
			if(x>max)
				max=x;
		}
		x=max-min;
		printf("%d\n",x+x);
	}
	return 0;
}

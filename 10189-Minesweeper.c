#include <stdio.h>
int main()
{
	int i,j,k,r,c,z;
	char y[] = {1,-1,0,0,1,1,-1,-1};
	char x[] = {0,0,1,-1,-1,1,-1,1};
	char f[105][105];
	z = 0;
	scanf("%d %d",&r,&c);
	while(1)
	{
	    if(r==0||c==0)
	    break;
		getchar();
		if(z)
			printf("\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				f[i][j]=getchar();
				if(f[i][j]=='.')
					f[i][j]='0';
			}
			getchar();
		}
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(f[i][j]=='*')
					for(k=0;k<8;k++)
						if(i+x[k]>=0&&i+x[k]<r&&j+y[k]>=0&&j+y[k]<c&&f[i+x[k]][j+y[k]]!='*')
							f[i+x[k]][j+y[k]]++;
		printf("Field #%d:\n",++z);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				printf("%c",f[i][j]);
			printf("\n");
		}
		scanf("%d %d",&r,&c);
	}
	return 0;
}

#include<stdio.h>
int min(int x,int y)
{
    int z;
    z=(x<y)?x:y;
    return z;
}
int main()
{
    int t1,t2,f,a,c1,c2,c3,k,c,s,m,i=1;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        m=min(c1,min(c2,c3));
        c=((c1+c2+c3)-m)/2;
        s=t1+t2+f+a+c;
        printf("Case %d: ",i++);
        if(s>=90)printf("A");
        else if(s>=80)printf("B");
        else if(s>=70)printf("C");
        else if(s>=60)printf("D");
        else if(s<=60)printf("F");
        printf("\n");
        }

    return 0;
}

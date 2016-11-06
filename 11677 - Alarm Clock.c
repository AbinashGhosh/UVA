#include<stdio.h>
int main()
{
    int m1,m2,hi,hf,mi,mf,ans;
    while(scanf("%d%d%d%d",&hi,&mi,&hf,&mf)==4)
    {
        if(hi==0&&hf==0&&mi==0&&mf==0)break;
        m1=(hi*60)+mi;
        m2=(hf*60)+mf;
        if(m2>=m1)
        {
            ans=m2-m1;
           printf("%d\n",ans);
        }
        else if(m1>m2)
        {
            ans=(1440-m1)+m2;
            printf("%d\n",ans);
        }
    }
   return 0;
}

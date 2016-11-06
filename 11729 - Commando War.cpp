#include<stdio.h>
int main()
{
    long int a,t[1005],n,i,j,b[1005],k[1005],temp,temp1,max,sum,m;
     while(scanf("%ld",&n)==1)
     {
         if(n==0)break;
         for(a=0;a<n;a++)
         {
             scanf("%ld%ld",&b[a],&k[a]);
             t[a]=b[a]+k[a];
         }
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if(t[i]<t[j])
                 {
                    temp=b[i];
                    b[i]=b[j];
                    b [j]=temp;

                    temp1=k[i];
                    k[i]=k[j];
                    k[j]=temp1;
                 }
                 else if(t[i]==t[j])
                 {
                     if(b[i]<b[j])
                     {
                    temp=b[i];
                    b[i]=b[j];
                    b [j]=temp;

                    temp1=k[i];
                    k[i]=k[j];
                    k[j]=temp1;
                     }

                 }
                 //printf("%ld %ld \n",b[j],k[j]);
             }
         }
        m=b[0]+k[0];
        sum=b[0];
        for(i=1;i<n;i++)
        {
            sum=sum+b[i];
            if(m>(sum+k[i]))
            max=m;
            else
            max=sum+k[i];
            m=max;
        }
        printf("%ld\n",m);
     }
    return 0;
}

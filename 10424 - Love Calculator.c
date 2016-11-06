#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char m[30],f[30];
    int a,b,i,j,sum,sun,k,ans;
    float p;
    while(gets(m))
    {
        gets(f);
        a=strlen(m);
        b=strlen(f);
        sum=0;sun=0;
        for(i=0;i<a;i++)
        {
            if(isalpha(m[i])>0)
            {
            m[i]=(tolower(m[i]));
            sum=sum+m[i]-96;
            }
        }

        for(i=0;i<b;i++)
        {
            if(isalpha(f[i])>0)
            {
            f[i]=(tolower(f[i]));
            sun=sun+f[i]-96;
            }
        }


        while(sum>9)
        {
            k=sum;ans=0;
            while(k>0)
            {
                ans=ans+(k%10);
                k=k/10;
            }
            sum=ans;
        }

        while(sun>9)
        {
            k=sun;ans=0;
            while(k>0)
            {
                ans=ans+(k%10);
                k=k/10;
            }
            sun=ans;
        }

        if(sum>sun)
        p=(float)sun*100/(float)sum;
        else
        p=(float)sum*100/(float)sun;
        printf("%.2f %%\n",p);
    }
   return 0;
}

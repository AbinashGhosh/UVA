#include<stdio.h>
int main()
{
    long long int b,u,s,p,f,t,m,ts,e,sum;
    char k,v[80];
    scanf("%lld%*c",&ts);
    while(ts--)
    {
        e=0;b=0;u=0;s=0;p=0;f=0;t=0;m=0;sum=0;
        while(scanf("%c",&k)==1)
        {
            if(k=='\n')
            break;
            if(k=='M')
            {
                m++;
                if(m>9||t>0||f>0||p>0||s>0||u>0||b>0)
                {
                   e=1;break;
                }
            }
            else if(k=='T')
            {
                t++;
                if(t>9||f>0||p>0||s>0||u>0||b>0)
                {
                   e=1;break;
                }
            }
            else if(k=='F')
            {
                f++;
                if(f>9||p>0||s>0||u>0||b>0)
                {
                    e=1;break;
                }
            }
            else if(k=='P')
            {
                p++;
                if(p>9||s>0||u>0||b>0)
                {
                   e=1;break;
                }
            }
            else if(k=='S')
            {
                s++;
                if(s>9||u>0||b>0)
                {
                    e=1;break;
                }
            }
            else if(k=='U')
            {
                u++;
                if(u>9||b>0)
                {
                    e=1;break;
                }
            }
            else if(k=='B')
            {
                b++;
                if(b>9)
                {
                    e=1;break;
                }
            }
        }

        if(e==0)
        {
            sum=(b*1)+(u*10)+(s*100)+(p*1000)+(f*10000)+(t*100000)+(m*1000000);
            printf("%lld\n",sum);
        }
        else
        {

           printf("error\n");
        }




    }
    return 0;
}

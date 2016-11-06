#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *fibo[5001]= {0};
    fibo[0]="0";
    fibo[1]="1";
    int length1=1;
    int length2=1;
    int l;
    for(long i=2; i<=5000; i++)
    {
        char str[10000];
        if(length1>=length2)l=length1;
        else l=length2;
        int ca=0;
        long j,k,m,p;
        for(j=length1-1,k=length2-1,m=0,p=0; p<l; j--,k--,m++,p++)
        {
            int string1;
            if(j<0)fibo[i-2][j]='0';
            string1=fibo[i-2][j]-48;
            int string2;
            if(k<0)fibo[i-1][k]='0';
            string2=fibo[i-1][k]-48;
            int ans=0;
            ans+=string1+string2+ca;
            if(ans>9)
            {
                str[m]=(ans-10)+48;
                ca=1;
            }
            else
            {
                str[m]=ans+48;
                ca=0;
            }
        }
        if(ca>0)
        {
            str[m]=ca+48;
            m++;
        }
        str[m]='\0';
        fibo[i]=new char[m+1];
        long y=0;
        for(long x=m-1; x>=0; x--,y++)
        fibo[i][y]=str[x];
        fibo[i][y]='\0';
        length1=strlen(fibo[i-1]);
        length2=strlen(fibo[i]);
    }
    int n;
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<fibo[n]<<"\n";
    }
    return 0;
}

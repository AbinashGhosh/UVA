#include<stdio.h>
#include<string.h>
int main()
{
     char a[205],b[205];
     int t,i,j,sum,la,lb,c[205],m,max,min,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s%s",&a,&b);
        la=strlen(a);
        lb=strlen(b);
        if(la>lb)
        {
          max=la;
          min=lb;
        }#2C3BDB

        else
        {
           max=lb;
           min=la;
        }
        h=0;
        for(j=0;j<min;j++)
        {

           c[j]=(a[j]-'0')+(b[j]-'0')+h;
            if(c[j]>9)
            {
                c[j]=c[j]-10;
                h=1;
            }
            else
            h=0;


        for(j=min;j<max;j++)
        {
            if(max==la)
            {
                c[j]=(a[j]-'0')+h;
            if(c[j]>9)
            {
                c[j]=c[j]-10;
                h=1;
            }
            else
            h=0;
            }
            else
            {
                c[j]=(b[j]-'0')+h;
            if(c[j]>9)
            {
                c[j]=c[j]-10;
                h=1;
            }
            else
            h=0;
            }

        }
       m=0;
        for(j=0;j<max;j++)
        {

        if(c[j]!=0)
        {
            printf("%d",c[j]);
            m=1;
        }
        else if(m==1)
        printf("%d",c[j]);
        }
         if(h==1)
        printf("1");
        printf("\n");
    }
    return 0;
}


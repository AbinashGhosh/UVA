#include<cstdio>
#include<cmath>
#define RA (acos(-1)/180)
int main()
{
    int l,w,h,angle;
    double H,A;
    while(scanf("%d%d%d%d",&l,&w,&h,&angle)==4)
    {
        H=(l*((sin(angle*RA)/sin((90-angle)*RA))));
        if(angle==90)
            A=0;
        else if(H<=h)
            A=((h-(H/2))*l*w);
        else if(angle)
        {
            H=(h*(sin((90-angle)*RA)/(sin(angle*RA))));
            A=(h*H*w)/2;
        }
        printf("%.3lf mL\n",A);
    }
    return 0;
}


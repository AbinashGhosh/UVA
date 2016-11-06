#include<stdio.h>
int main()
{
    int t,i,j,ff,fl,tf,tl,ff1,fl1,tf1,tl1,k;
    char c;
    scanf("%d",&t);
    getchar();
    for(;t>0;t--)
    {
        ff=0;fl=0;tf=0;tl=0;ff1=0;fl1=0;tf1=0;tl1=0;k=0;
        for(i=1;;i++)
        {
            scanf("%c",&c);
            if(c=='\n')break;
            if(i%2==1)
            {
                if(c=='(')ff++;
                else if(c==')')fl++;
                else if(c=='[')tf++;
                else if(c==']')tl++;
            }
            else
            {
                if(c=='(')ff1++;
                else if(c==')')fl1++;
                else if(c=='[')tf1++;
                else if(c==']')tl1++;
            }
            if((fl+fl1)>(ff+ff1)||(tl+tl1)>(tf+tf1))
            {
                k=1;

            }

        }
        if(ff==fl1&&ff1==fl&&tf==tl1&&tf1==tl&&k==0)
        printf("Yes\n");
        else
        printf("No\n");

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int day,month,year,day1,month1,year1,day2,month2,year2,t,k,i;
    while(scanf("%d",&t)==1)
    {
        k=1;
        while(t--)
        {

            scanf("%d/%d/%d%d/%d/%d",&day2,&month2,&year2,&day1,&month1,&year1);
            if (day2<day1)day2=day2+30,month2--;
            if (month2<month1) month2=month2+12,year2--;
            year=year2-year1;
            if(year>130)printf("Case #%d: Check birth date\n",k++);
            else if(year<0)printf("Case #%d: Invalid birth date\n",k++);
            else printf("Case #%d: %d\n",k++,year);
        }
    }
    return 0;
}


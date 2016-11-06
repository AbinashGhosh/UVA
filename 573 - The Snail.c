#include <stdio.h>
#include <math.h>
int main()
{
    double ih,u,f,n;
    unsigned int dec,ext,h,d,count;

    while(scanf("%u%lf%u%lf",&h,&u,&d,&f)==4)
    {
     count =0;ih=0;
     dec=(u*f)/100;
      while(1)
      {
          ih=ih+u;
          if(ih>h)
          {
               printf("success on day %u\n",count+1);
               break;
          }
          u=u-dec;
          ih=ih-d;
          if(ih<0)
          {
              printf("failure on day %u\n",count+1);
                break;
          }
          count++;
          if(u<0)
          {
              ext=(int)(ceil(ih/d));
              if(d*ext<ih)ext++;
              printf("failure on day %u\n",count+ext+1);
                break;
          }


      }
    }
    return 0;
}

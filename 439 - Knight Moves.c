#include<stdio.h>
#include<math.h>
int main()
{
    char a1,a2,c;
    int x1,x2,y1,y2,rx,ry;
    int kn[8][8]={0,3,2,3,2,3,4,5, 3,2,1,2,3,4,3,4, 2,1,4,3,2,3,4,5, 3,2,3,2,3,4,3,4, 2,3,2,3,4,3,4,5, 3,4,3,4,3,4,5,4, 4,3,4,3,4,5,4,5, 5,4,5,4,5,4,5,6 };
     while(scanf("%c%d%c%c%d",&a1,&y1,&c,&a2,&y2)==5)
     {
         getchar();
         printf("To get from %c%d to %c%d takes ",a1,y1,a2,y2);
         if((((a1=='a'&&a2=='b')||(a1=='h'&&a2=='g'))&&((y1==1&&y2==2)||(y1==8&&y2==7)))||(((a1=='b'&&a2=='a')||(a1=='g'&&a2=='h'))&&((y1==2&&y2==1)||(y1==7&&y2==8))))
         {
             printf("4 knight moves.\n");
             continue;
         }
         rx=a1-a2;
         rx=abs(rx);
         ry=abs(y1-y2);
         printf("%d knight moves.\n",kn[rx][ry]);
     }
    return 0;
}
/* knights move
5	4	5	4	5	4	5	6
4	3	4	3	4	5	4	5
3	4	3	4	3	4	5	4
2	3	2	3	4	3	4	5
3	2	3	2	3	4	3	4
2	1	4	3	2	3	4	5
3	2	1	2	3	4	3	4
K	3	2	3	2	3	4	5

*/

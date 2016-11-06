#include <stdio.h>
int main()
{
    int n, b, h, w, z;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
    {
        int ans = 1 << 30,i;
        for(i = 0; i < h; ++i)
        {
            int beds = -1, p;
            scanf("%d", &p);
            int j;
            for( j = 0; j < w; ++j)
            {
                scanf("%d", &z);
                if(z > beds) beds = z;
            }
            if(beds >= n && p < ans && p * n <= b) ans = p;
        }
        if(ans == (1 << 30))
         printf("stay home\n");
        else
        printf("%d\n", ans * n);
    }
    return 0;
}

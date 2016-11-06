#include<stdio.h>
#include<string.h>
int main()
{
    int t,kase=1,i,j,m,d=1;
    char st[101][101];
    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;
        getchar();
        for(i=0; i<t; i++)
        {
            gets(st[i]);
            if(strlen(st[i])==0)
                gets(st[i]);
        }
        printf("Case %d:\n",kase++);
        printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
        for(i=0; i<t; i++)
        {
            printf("printf(\"");
            m=strlen(st[i]);
            for(j=0; j<m; j++)
            {
                switch(st[i][j])
                {
                case '"':
                    printf("\\%c",st[i][j]);
                    break;
                case '\\':
                  printf("\\%c",st[i][j]);
                    break;
                default:
                    printf("%c",st[i][j]);
                    break;
                }
            }
             printf("\\n\");\n");
        }
         printf("printf(\"\\n\");\nreturn 0;\n}\n");
    }
    return 0;
}


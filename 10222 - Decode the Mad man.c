#include<stdio.h>
int main()
{
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if(c==']') printf("p");
        else if(c=='[') printf("o");
        else if(c==39) printf("l");
        else if(c==';') printf("k");
        else if(c=='.') printf("m");
        else if(c==',') printf("n");
        else if(c=='p'||c=='P') printf("i");
        else if(c=='o'||c=='O') printf("u");
        else if(c=='i'||c=='I') printf("y");
        else if(c=='u'||c=='U') printf("t");
        else if(c=='y'||c=='Y') printf("r");
        else if(c=='t'||c=='T') printf("e");
        else if(c=='r'||c=='R') printf("w");
        else if(c=='e'||c=='E') printf("q");
        else if(c=='l'||c=='L') printf("j");
        else if(c=='k'||c=='K') printf("h");
        else if(c=='j'||c=='J') printf("g");
        else if(c=='h'||c=='H') printf("f");
        else if(c=='g'||c=='G') printf("d");
        else if(c=='f'||c=='F') printf("s");
        else if(c=='d'||c=='D') printf("a");
        else if(c=='m'||c=='M') printf("b");
        else if(c=='n'||c=='N') printf("v");
        else if(c=='b'||c=='B') printf("c");
        else if(c=='v'||c=='V') printf("x");
        else if(c=='c'||c=='C') printf("z");
        else if(c==' ') printf(" ");
        else if(c=='\n') printf("\n");
            }

            return 0;
}

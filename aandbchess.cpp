#include<stdio.h>

int black(char *b);
int white(char *w);
int sumw=0,sumb=0;
int main()
{
    int i,j,k,w,b;
    char ch;
    for(j = 1;j<=8; j++){
     for( i = 1; i<=8; i++)
    {
        scanf("%c",&ch);
        if(ch =='.' || ch =='k' || ch =='K')continue;
        else if(ch >=65 && ch<=90) w = white(&ch);
        else b = black(&ch);
    }
    getchar();
    }
    if(sumw>sumb)printf("White %d %d\n",sumw,sumb);
    else if(sumb>sumw)printf("Black %d %d\n",sumw,sumb);
    else printf("Draw\n");
}
int white(char *w)
{
    if(*w == 'Q') sumw = sumw+9;
    else if(*w == 'R') sumw = sumw+5;
    else if(*w == 'N') sumw = sumw+3;
    else if(*w == 'B') sumw = sumw+3;
    else if(*w == 'P') sumw = sumw+1;
    return sumw;
}
int black(char *b)
{
    if(*b == 'q') sumb = sumb+9;
    else if(*b == 'r') sumb = sumb+5;
    else if(*b == 'n') sumb = sumb+3;
    else if(*b == 'b') sumb = sumb+3;
    else if(*b == 'p') sumb = sumb+1;
    return sumb;
}

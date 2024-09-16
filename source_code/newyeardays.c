#include<stdio.h>
int main()
{
    int x,y,n,i;
    char a,b,c,d,e,f;
    scanf("%d %c %c %c",&x,&a,&b,&c);

    if((x==1||x==2||x==3||x==4||x==7)&&c=='w')
        printf("52");

    else if((x==5||x==6) && c=='w')
        printf("53");

    else if((x<30) && c=='m')
        printf("12");

    else if((x==30) && c=='m')
        printf("11");

    else if((x>30) &&  c=='m')
        printf("7");
}

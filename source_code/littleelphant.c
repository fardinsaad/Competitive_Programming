#include<stdio.h>

int main()
{
    int a1,a2,a3;
    int b1,b2,b3;
    int c1,c2,c3,d;

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&c1,&c2,&c3);
    d=(a1+b1+c1+a2+b2+c2+a3+b3+c3)/2;
    printf("%d %d %d\n%d %d %d\n%d %d %d",d-a2-a3,a2,a3,b1,d-b1-b3,b3,c1,c2,d-c1-c2);
    return 0;
}

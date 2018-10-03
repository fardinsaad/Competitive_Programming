#include<stdio.h>

int main()
{
    int a,b,p,i,j,q,temp;

    scanf("%d %d", &a, &b);

    p = a < b ? a : b ;

    q = a > b ? a : b ;

    temp = (q - p)/2;

    printf("%d %d\n",p,temp);

    //main();
}

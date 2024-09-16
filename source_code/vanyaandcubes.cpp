#include<stdio.h>

int main()
{
    int n,i,j,cnt = 0,temp,sum;

    scanf("%d", &n);

    sum = n;

    if( sum == 1) printf("1");

    else{

    for(i = 1 ; i <= n ; i++)
    {
        temp = (i * (i+1))/2;

        sum = sum - temp;

        if(sum >= 0) ++cnt;

        else {printf("%d\n", cnt) ; main(); }

    }
    }

}

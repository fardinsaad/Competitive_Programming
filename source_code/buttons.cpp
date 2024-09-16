#include<stdio.h>

int main()
{
     long long int n,butt;
    scanf("%I64d", &n);
    butt = ((n*(n-1))/2)+1;
    butt = butt * n;
    long long int i,prod;
    n = n -1;
    prod = (n*(n+1)*(2*n+1))/6;
    printf("%I64d",butt-prod);
    //main();
}

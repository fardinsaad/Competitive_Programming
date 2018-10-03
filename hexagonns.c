
#include<stdio.h>
int main()
{
    long long n,x;
    scanf("%I64d",&n);
    x=((n*(n+1)/2)*6)+1;
    printf("%I64d",x);
}

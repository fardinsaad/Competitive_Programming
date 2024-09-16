#include<stdio.h>
int main()
{
    long long int n,m,prod;
    scanf("%I64d %I64d",&n,&m);
    m=m+1;
    prod=n*m;
    printf("%I64d",prod);
    return 0;
}

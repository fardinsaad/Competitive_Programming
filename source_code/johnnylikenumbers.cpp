#include<stdio.h>

int main()
{
    long long int n,k,temp;

     scanf("%I64d %I64d",&n, &k);

     temp = n+k-(n%k);

     printf("%I64d\n",temp);
}


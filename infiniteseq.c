#include<stdio.h>

int main()
{
    long long int n,x,y,i=1,j;

    scanf("%I64d",&n);
    while(n>0)
    {
        n=n-i;
        x=n+i;
        ++i;
    }
    printf("%I64d\n",x);
    main();
}

#include<stdio.h>
int main()
{
    long long int n;
    int x,y;
    scanf("%I64d",&n);
    if(n%2==0)
    {
        x=n/2;
        printf("%I64d\n",x);
    }
    else
    {
        y=n/2+1;
        printf("-%I64d\n",y);
    }
}

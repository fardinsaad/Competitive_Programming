#include<stdio.h>

int main()
{
    long long int n,r,prod=1,x,result,temp=1,i,y;
    printf("n=");
    scanf("%lld",&n);
    printf("k=");
    scanf("%lld",&r);
    x=n-r;
    if(n==r)
    {
        x=n;
        printf("%lldC=1%lld",n,r);
    }
    else if(r>x)
    {
        y=n;
        for(i=x;i>0;i--)
        {
            prod=prod*y;
            y--;
        }
        for(i=1;i<=x;i++)
        {
            temp=temp*i;
        }
        result=prod/temp;
        printf("%lldC%lld=%lld",n,r,result);
    }
    else if(r<x)
    {
         y=n;
         for(i=r;i>0;i--)
        {
            prod=prod*y;
            y--;
        }
        for(i=1;i<=r;i++)
        {
            temp=temp*i;
        }
        result=prod/temp;
        printf("%lldC%lld=%lld",n,r,result);

    }
    return 0;
}

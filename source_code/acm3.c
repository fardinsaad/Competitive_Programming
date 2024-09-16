#include<stdio.h>

int main()
{
    int n,x,y;
    scanf("%d",&n);
    if(n%5==0)
    {
        x=n/5;
        printf("%d\n",x);
    }
    else if(n%5!=0)
    {
        y=n/5+1;
        printf("%d\n",y);
    }
}

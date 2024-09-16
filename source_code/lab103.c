#include<stdio.h>
int gcd(int i);
int x,y;
int main()
{
    int i,j;
    scanf("%d %d",&x,&y);
    i=x;
    if(x>y)
    {
        i=y;
    }
    j=gcd(i);
    printf("%d",j);
}
int gcd(int i)
{
    if(x%i==0 && y%i==0)return i;
    else
        return gcd(i-1);
}

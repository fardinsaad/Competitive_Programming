#include<stdio.h>
int sois(int x,int y);
int cnt=0;
int main()
{
    int n,m,k,l;
    scanf("%d %d",&n,&m);
    k=sois(n,m);
    printf("%d",k+n);
  // main();
}
int sois(int x,int y)
{
    int temp,sum=0,temp1=0;
    while(x>=y)
    {
        temp=x/y;
        temp1=x%y;
        x=(x/y)+temp1;
        sum=sum+temp;
    }
    return sum;
}

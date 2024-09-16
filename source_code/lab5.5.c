#include<stdio.h>

int main()
{
    int n,bi=0,hex=0,temp,x,num;
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        if(num%2==0)
            num=num/2;
        else
        {
            bi++;
           o num=num/2;
        }
    }

    while(n>0)
    {
        x=n%10;
        n=n/10;
        temp=x;
        while(temp>0)
        {
            if(temp%2==0)
                temp=temp/2;
            else
            {
                hex++;
                temp=temp/2;
            }
        }
    }
        printf("%d %d",bi,hex);
        return 0;
}

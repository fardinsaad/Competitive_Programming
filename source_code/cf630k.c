#include<stdio.h>

int main()
{
    long long int n,cnt=0;
    long long int x,i,temp;
    scanf("%I64d",&n);
    temp=n/2520;
    cnt=temp*576;
    x=n%2520;
    for(i=1;i<=x;i++)
    {
        if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
            continue;
        else
            cnt++;
    }
    printf("%I64d\n",cnt);
    return 0;
}

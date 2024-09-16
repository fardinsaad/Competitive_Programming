#include<stdio.h>
int main()
{
    long long int i,n,x=1,cnt=0;
    scanf("%I64d",&n);
    while(n>0 && n-x>=0)
    {
        n=n-x;
        cnt++;
        if (x==1)
            x=2;
        else if (x==2)
            x=1;
    }
    printf("%I64d",cnt);
    return 0;
}

#include<stdio.h>
int main()
{
    long long int i,j,r,l,k;
    int x=0;
    scanf("%I64d %I64d %I64d",&l,&r,&k);
    for(i=1;i<=r;i=i*k)
    {
        if(i>=l)
        {
            printf("%I64d ",i);
            x=1;
        }
       if(i>r/k)
        {
            break;
        }
    }
    if(x==0)
    printf("-1");
    return 0;
}

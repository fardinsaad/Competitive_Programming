#include<stdio.h>
int main()
{
    long long int x=0,n,p;
    int w,k,i;
    scanf("%d %I64d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        x=x+i*k;
        //printf("%I64d\n",x);
    }
    if(x>n)
    {
        p=x-n;
        printf("%I64d",p);
    }
    else
        printf("0");
    return 0;
}

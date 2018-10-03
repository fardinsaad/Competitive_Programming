#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    if(n<0)
    {
        for(i=0;i>n;n++)
        {
            sum=sum+n;
        }
        printf("%d",sum+1);
    }
    else if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("%d",sum);
    }
    else if(n==0)
        printf("1");
}

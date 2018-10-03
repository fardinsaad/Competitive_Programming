#include<stdio.h>

int main()
{
    int i,j,n,a[10],sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum%5==0 && sum!=0)
        printf("%d",sum/5);
    else printf("-1");
    return 0;
}

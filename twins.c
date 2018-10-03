#include<stdio.h>
int main()
{
    int i,n,a[100],x,j,sum=0,sum1=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            sum=sum+a[j+1+i];
        }
        for(x=0;x<i+1;x++)
        {
            sum1=sum1+a[x];
        }
        if(sum1>sum)
        {
            goto exit;
        }
        sum=0;
        sum1=0;
    }
    exit:
        printf("%d",x);
    return 0;
}

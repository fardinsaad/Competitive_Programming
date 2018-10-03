#include<stdio.h>
int main()
{
    int t,a[1000],i,temp,sum=0,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    t=t/2+1;
    for(i=0;i<t;i++)
    {
        sum=sum+(a[i]/2)+1;
    }
    printf("%d\n",sum);
return 0;
}

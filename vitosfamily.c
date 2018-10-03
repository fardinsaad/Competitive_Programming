#include<stdio.h>
int main()
{
    int t,r,a[30000],i,j,temp,n,k,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
         scanf("%d",&r);
         for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(r%2==0)
    {
        n=r/2;
        k=(a[n-1]+a[n])/2;
        for(i=0;i<r;i++)
        {
            if(k>=a[i])
            {
                sum=sum+(k-a[i]);
            }
            else if(k<a[i])
            {
                sum=sum+(a[i]-k);
            }
        }
    }
    else if(r%2!=0)
    {
        n=r/2;
        k=a[n];
         for(i=0;i<r;i++)
        {
            if(k>=a[i])
            {
                sum=sum+(k-a[i]);
              //  printf("%d %d %d\n",sum,k,a[i]);
            }
            else if(k<a[i])
            {
                sum=sum+(a[i]-k);
             //    printf("%d %d %d\n",sum,k,a[i]);
            }
        }

    }
    printf("%d\n",sum);
    }
}

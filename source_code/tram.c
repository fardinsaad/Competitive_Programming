#include<stdio.h>
int main()
{
    int n,i,temp,j,a[1000],b[1000],c[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&b[i],&c[i]);
        if(i==0)
        {
            a[i]=c[i];
           // printf("%d\n",i);
        }
        else if(i!=0)
        {
            a[i]=a[i-1]-b[i]+c[i];
            //printf("%d\n",i);
        }
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("%d",a[n-1]);
}

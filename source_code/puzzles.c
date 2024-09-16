#include<stdio.h>
int main()
{
    int n,m,a[1000],k,i,j,res,temp,low=10000;
    scanf("%d %d",&n,&m);
    for(k=0;k<m;k++)
    {
        scanf("%d",&a[k]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<=m-n;i++)
    {
        res=a[n-1+i]-a[i];
        if(res<=low)
        {
            low=res;
        }
    }
    printf("%d",low);
}

#include<stdio.h>

int main()
{
    int n,m,a[n],i,j,k;

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)scanf("%d",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%m==0)
        {
            printf("YES\n");
            return 0;
        }
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                temp=a[i]+a[j]
            }
        }
    }
}

#include<stdio.h>

int main()
{
    long long int n,i,j,k = 1,l = 1,a[105],b[1000],temp,cnt = 0,x;

    scanf("%I64d",&n);

    for( i = 1; i <=n ; i++) scanf("%I64d",&a[i]);

    for(i = 1; i<=n-1;i++)
    {
        for(j = 1;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
               printf("%I64d %I64d\n",j,j+1);
            }

        }

    }
}

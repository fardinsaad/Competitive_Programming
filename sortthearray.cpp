#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    long long int arr[100000];
    arr[0]=0;
    arr[n+1]=10001;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]>arr[i+1])
       {
            break;
       }
    }
    if(i==n)
    {
        printf("yes\n");
        printf("1 1");
    }
    else
    {
        for(j=n;j>1;j--)
        {
            if(arr[j]<arr[j-1])
            break;
        }
        for(k=i;k<j;k++)
        {
            if(arr[k]<arr[k+1])
            break;
        }
        if(k!=j || arr[i]>arr[j+1] || arr[i-1]>arr[j])
        {
            printf("no");
        }
        else
        {
            printf("yes\n%d %d",i,j);
        }
    }


    return 0;
}

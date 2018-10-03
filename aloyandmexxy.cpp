
#include<stdio.h>
#include<algorithm>

int main()
{
    long long int n,i,j,k,temp = 0;

    scanf("%I64d",&n);

    long long int a[n],b[n]={0};

    for( i = 1 ; i <= n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    std::sort(a+1,a+n+1);

    for( i = 1 ; i <= n ; i++)
    {
        if(i == 1){ a[i] = 1;}
        else if(i > 1)
        {
            if(a[i] > a[i-1]) { a[i] = a[i - 1] + 1;}
        }
    }
    printf("%I64d",a[n] + 1);
}

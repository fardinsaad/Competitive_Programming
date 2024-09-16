#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    long long int a[n],k=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        if(i>0) k+=abs(a[i]-a[i-1]);
        else k+=abs(a[i]);
    }


    printf("%I64d",k);
    return 0;
}

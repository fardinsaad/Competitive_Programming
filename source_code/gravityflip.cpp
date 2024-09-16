#include<stdio.h>
#include<algorithm>
int main()
{
    int n,a[105],i,j,k;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    std::sort(a,a+n);
    for(i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}

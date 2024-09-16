#include<stdio.h>
#include<algorithm>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+2],i;

    for(i=0;i<n;i++)scanf("%d",&a[i]);


    int count=1,mx=1;
    int pre = a[0];
    for(i=1;i<n;i++)
    {
        if(pre<=a[i])
        {
            count++;
            if(count>mx)mx=count;
        }
        else
        {
            count=1;
        }
        pre=a[i];

    }
    printf("%d",mx);
}

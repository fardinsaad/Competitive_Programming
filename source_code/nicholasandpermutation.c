#include<stdio.h>

int main()
{
    int n,a[1000],i,j,k,x,y,t,r,s;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==n) x=i;
        if(a[i]==1) y=i;
    }
    if(x>y)
    {
        t=n-1;
        j=t-y;
        t=0;
        k=x-t;
        printf("%d\n",j>=k?j:k);
    }
    else
    {
        t=n-1;
        j=t-x;
        t=0;
        k=y-t;
        printf("%d\n",j>=k?j:k);

    }
    return 0;
}

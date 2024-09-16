#include<stdio.h>
#include<algorithm>
int main ()
{
int a[1000],i,j,k,n,m,count=0,sum=0;
scanf("%d",&n);
sum=(n*(n+1))/2;
scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
scanf("%d",&m);
    for(i=k;i<(k+m);i++)
    {
    scanf("%d",&a[i]);
    }
    std::sort(a,a+(k+m));
    for(i=0;i<(k+m);i++)
    {
    if(a[i]!=a[i+1])
    count=count+a[i];
    }
    if(sum==count)
    printf("I become the guy.");
    else
    printf("Oh, my keyboard!");

}

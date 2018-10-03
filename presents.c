#include<stdio.h>
int main()
{
    int a[1000],i,t,j,k,l,n=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&k);
        a[k-1]=n;
        n++;
    }
    for(j=0;j<t;j++)
    {
        printf("%d ",a[j]);
    }
   // main();
}

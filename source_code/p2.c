#include<stdio.h>

int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(j=0;j<x;j++)printf("%d ",a[j]);
}

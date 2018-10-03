#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int main ()
{
    int i,j,k,n,l,x,y;
    double d = 0;
    scanf("%d %d", &n, &l);
    int a[n];
    for(i=0;i<n;i++){ scanf("%d", &a[i]); }
    std::sort(a,a+n);
    for(i=0;i<n;i++)
     {
        if(i>0){ x = abs(a[i]-a[i-1]) ; if(x>d) d = x;}
     }
    d = d/2;
    if(d < a[0]) d = a[0];
    y = l - a[n-1];
    if(d < y) d = y;
    printf("%lf",d);
}


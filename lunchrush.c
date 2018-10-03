#include<stdio.h>
int main()
{
    long long int n,k,i,j,max=0;
    scanf("%lld %lld",&n,&k);
    long long int f[n],t[n];
    for (i=0;i<n;i++)
    {
        scanf("%lld %lld",&f[i],&t[i]);
        if (t[i]>k) f[i]=f[i]-(t[i]-k);
        if(i==0) max=f[i];
        else if(f[i]>max) max=f[i];
    }
    printf("%lld",max);
}

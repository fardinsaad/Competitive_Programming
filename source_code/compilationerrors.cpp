#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,suma = 0,sumb = 0,sumc = 0;
    scanf("%I64d", &n);
    long long int a[n+2],b[n+1],c[n];
    for( i = 0; i < n; i++)
    {
        cin>>a[i];
        suma = suma + a[i];
    }
    for( i = 0; i < n - 1; i++)
    {
        cin>>b[i];
        sumb = sumb + b[i];
    }
    for( i = 0; i < n - 2; i++)
    {
        cin>>c[i];
        sumc = sumc + c[i];
    }
    printf("%I64d\n%I64d\n",suma - sumb,sumb - sumc);
    main();
}

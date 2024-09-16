#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a[100000],i,j,k = 2000000001,r = 0,o = 0;
    cin>>n;
    long long int mn[n],mx[n];
    for(i = 0;i < n; i++) scanf("%I64d",&a[i]);
        mx[0] = abs(a[n - 1] - a[0]);
         mn[0] =abs(a[0] - a[1]);
            for(i = 1;i < n-1; i++)
                {
                    if(abs(a[i]-a[i-1])<=abs(a[i]-a[i+1])) mn[i] = abs(a[i]-a[i-1]);
                    else mn[i] = abs(a[i]-a[i+1]);
                    if(abs(a[n-1]-a[i])>=abs(a[i]-a[0])) mx[i] = abs(a[n-1]-a[i]);
                    else mx[i] = abs(a[i]-a[0]);
                }
                mn[n-1] =abs(a[n-1] - a[n-2]);
                mx[n-1] =abs(a[n-1] - a[0]);
    for(i = 0;i < n; i++) cout<<mn[i]<<" "<<mx[i]<<'\n';
  // main();

}

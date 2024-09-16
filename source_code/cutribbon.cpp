#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,a[8],b,mx = 0;
    cin>>n;
    for(i = 0; i < 3; i++)
        cin>>a[i];
    sort(a,a+3);
    for(i = 0; i*a[0] <= n; i++)
    {
        for(j = 0; i*a[0] + j*a[1] <= n; j++)
        {
            k = (n - (i*a[0]) - (j*a[1]))/ a[2];
            if(i*a[0]+j*a[1]+k*a[2] == n)
            mx = max(mx,i+j+k);
        }
    }
    cout<<mx;

}

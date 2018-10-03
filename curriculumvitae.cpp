#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);

int main()
{
    fastread
    ll i,j,k,l,m,n,cnt = 0,c1=0,c0=0;
    cin >> n;
    ll a[n+2];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]) c1++;
        else c0++;
    }
    for(i = -1; i < n; i++)
    {
        k = 0;
        for(j = 0; j <= i; j++)
        {
            if(a[j] == 0)
                k++;
        }
        for(j = i + 1; j < n;j++)
        {
            if(a[j])
                k++;
        }
        cnt = max(cnt,k);
    }
    cout << cnt << endl;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);

int main()
{
    fastread
    ll i,j,k,l,t,m,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n+5],sum[n+5];
        ll ss = 0;
        memset(sum,0,sizeof(sum));
        for(i = 1;i <= n; i++)
        {
            cin>>a[i];
            ss += a[i];
            sum[i] = ss;
        }
        ll temp,mex = 1e10,tot;
        for(i = 1 ; i <= n; i++)
        {
            tot = sum[i] + ss;
           // cout << sum[i] << " "<<ss<<endl;
            if(tot < mex)
            {
                temp = i;
                mex = tot;
            }
            ss -= a[i];
        }
        cout << temp << endl;
    }
}

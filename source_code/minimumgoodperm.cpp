#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);
ll a[1000000];

int main()
{
    fastread
    ll i,j,k,l;
    for(i = 1; i <= 1e5+20 ; i++)
    {
        if(i%2)
            a[i] = i + 1;
        else
            a[i] = i - 1;
    }
    ll t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n % 2 == 0)
        {
            for(i = 1; i<= n; i++)
                cout << a[i] << " ";

            cout << endl;
        }
        else
        {
            for(i = 1; i<=n - 3; i++)
                cout << a[i] <<" ";

            cout << i + 1<< " " << i + 2<< " " << i << endl;
        }

    }








}

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);

int main()
{
    ll n,k,t;
    cin >> n >> k >> t;
    if(t <= k)
        cout << t <<endl;
    else if(t > k and t <= n)
        cout << k <<endl;
    else
    {
        cout << n+k-t <<endl;
    }
}

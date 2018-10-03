#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,m,n;
    cin >> n;
    if(n % 2)
    {
        cout << n/2 << " "<<n/2+1<<endl;
    }
    else
    {
        k = n/2;
        if(k%2)
        {
            cout << k-2 <<" "<< k+2<<endl;
        }
        else
            cout << k-1<<" "<<k+1<<endl;
    }

}

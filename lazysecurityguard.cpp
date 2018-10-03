#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,m,n;
    cin >> n;
    m = sqrt(n);
    if(m*m == n)
        cout << 4*m <<endl;
    else if(n <= m * (m+1))
    {
        cout << 4*m+2<<endl;
    }
    else
        cout << 4*m+4<<endl;
}

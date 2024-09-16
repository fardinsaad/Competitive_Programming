#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n;
    cin >> n;
    cin >> a;
    //if(n < 3)cout<<a;
     if(a.size() % 2 == 0)
    {
        for(i = n - 2; i >= 0; i = i - 2 ) cout<<a[i];
        for(i = 1; i < n ; i = i + 2)cout<<a[i];
    }
    else
    {
        for(i = n - 2; i >= 1; i = i - 2) cout<<a[i];
        for(i = 0; i < n; i = i + 2)cout<<a[i];
    }
}

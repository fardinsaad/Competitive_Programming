#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,cnt = 0,s,x = 1,y = 1e9+7,f = 0;
    vector<long long int>a;
    cin >> n;
    for(i = 0; i < n ; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(i = 0; i < n - 1; i++,x = x * 2)
    {
        x = x % y;
        f = f + (a[n - i - 1] - a[i]);
        cnt = cnt + (f%y) * x;
        cnt = cnt % y;
    }
    cout << cnt << endl;
}

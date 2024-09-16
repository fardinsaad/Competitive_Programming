#include<bits/stdc++.h>
using namespace std;
vector<long long int>a;
int main()
{
    long long int i,j,k,cnt = 0,n,mx =0;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> j;
        a.push_back(j);
        mx = max(mx,j);
    }
    sort(a.begin(),a.end());
    for(i = 0; i < n - 1;i++)
    {
        cnt = cnt + mx - a[i];
    }
    cout << cnt <<endl;
}

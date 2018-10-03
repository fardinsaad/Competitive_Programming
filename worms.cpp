#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,sum = 0;
    vector<int>v;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        sum += k;
        v.push_back(sum);
    }
    cin >> m;
    for(i = 0; i < m; i++)
    {
        cin >> k;
        cout << lower_bound(v.begin(),v.end(),k) - v.begin() + 1 <<endl;
    }
}

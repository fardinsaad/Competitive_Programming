#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator low;
    int m,n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    low = lower_bound(v.begin(),v.end(),10);
    cout << low - v.begin() << endl;
}

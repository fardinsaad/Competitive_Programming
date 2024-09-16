#include<bits/stdc++.h>
using namespace std;
vector<long long int> a;
int main()
{
    long long int i,j,k,l,f,m,n,cnt = 0;
    cin >> n;
    for(i = 0; i < n ; i++)
    {
        cin >> m;
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    l = a[0]; f = a[a.size() - 1];
    for(i = 1; i < n - 1; i++)
    {
        if(a[i] > l && a[i] < f)
            cnt++;
    }
    cout << cnt;

}

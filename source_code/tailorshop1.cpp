#include<bits/stdc++.h>
using namespace std;
vector<long long int>a;
int main()
{
    long long int i,j,k,m,n,p,x,y;
    cin >> n >> p;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    j = a[0] / p;
    if(j * p == a[0])
    {
        n = n + j - 1;
        x = n*(n + 1);
        x = x / 2;
        y = j*(j-1);
        y = y / 2;
        cout<<x - y << endl;
    }
    else
    {
        n = n + j;
        x = n*(n + 1);
        x = x / 2;
        y = j*(j + 1);
        y = y / 2;
        cout << x - y << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,s,x = 200;
    vector<long long int>a;
    cin >> n >> m >> k;
    for(i = 0 ; i < n; i++)
    {
        cin >> l;
        a.push_back(l);
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0 && k >= a[i])
        {
            s = abs(i+1 - m);
            x = min(x,s);
        }
    }
    cout << x*10 <<endl;

}

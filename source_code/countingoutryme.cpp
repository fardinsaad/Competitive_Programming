#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j = 1,k,l,m,n,f = 1;
    vector<long long int>a,v;
    v.push_back(-1);
    cin >> n >> k;
    for(i = 1; i <= n;i++)
        v.push_back(i);
    for(i = 0; i < k; i++)
    {
        cin >> l;
        j = (j + (l % n)) % n;
        if(j == 0)
        {
            a.push_back(v[n]);
            j = 1;
           // cout << v[n] << " ";
            v.erase(v.begin()+n);
        }
        else
        {
            a.push_back(v[j]);
            v.erase(v.begin()+j);
            //cout << v[j] << " ";
        }
        n = n - 1;
    }
    for(i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
}

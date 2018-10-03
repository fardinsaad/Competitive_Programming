#include<bits/stdc++.h>
using namespace std;

vector<long long int>p;
int main()
{
    long long int s,c,i,j,k,l,m,n,x,mn;
    cin >> m;
    while(m--)
    {
        p.clear();
        x = 0;
        mn = 1e10;
         cin >> c;
    for(i = 0; i < c; i++)
    {
        cin >> k;
        p.push_back(k);
    }
    cin >> n;
    for( i = 0 ; i < n ; i++)
    {
        cin >> l;
        x = max(x,l);
    }
    for(i = 0; i < x; i++)
    {
        mn = min(mn,p[i]);
    }
    cout << mn <<endl;

    }

}

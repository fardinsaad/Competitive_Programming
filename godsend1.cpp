#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);
    long long int i,j,k,l,m,n,sum = 0,odd = 0,even = 0;
    cin >> n;
    vector<long long int>a;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        sum += k;
        a.push_back(k);
        if(k % 2 == 0)
            even++;
        else
            odd++;
    }
    if(odd == 0)
        cout <<"Second\n";
    else
        cout << "First\n";
}

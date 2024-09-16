#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string st,ss;
    ll i,j,k,l;
    cin >> st >> ss;
    k = ss[0] -97;
    cout <<st[0];
    for(i = 1; i< st.size(); i++)
    {
        if(st[i] - 97>= k)
            break;
        cout << st[i];
    }
    cout << ss[0] <<endl;
}

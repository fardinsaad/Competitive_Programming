#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    mp["Icosahedron"] = 20;
    mp["Cube"] = 6;
    mp["Tetrahedron"] = 4;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    long long int i,j,k,m,n,sum = 0;
    cin >> n;
    string st;
    for(i = 0 ; i < n; i++)
    {
        cin >> st;
        sum = sum + mp[st];
    }
    cout << sum << endl;
}

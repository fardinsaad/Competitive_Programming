#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    string s1,s2;
    cin >> s1 >> k;
    ll my,your = 0;
    stringstream ss(s1);
    ss >> your;
    s2.push_back(s1[0]);
    for(i = 0; i < s1.size(); i++)
    {
        s2.insert(s2.begin()+i+1,k,'0');
        stringstream geek(s2);
        my = 0;
        geek >> my;
        if(my % your == 0)break;
        s2.erase(s2.begin()+i+1,s2.begin()+k+i+1);
        s2.push_back(s1[i+1]);
    }
    cout << my <<endl;
}

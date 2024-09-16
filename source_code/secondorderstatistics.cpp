#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int i,j,k,n,l;
    map<int,int>mp;
    vector<int>::iterator up;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> l;
        a.push_back(l);
        mp[l]++;
    }
    sort(a.begin(),a.end());
    if(mp[a[0]] == n) {cout<<"NO"<<endl; return 0;}
    up = upper_bound(a.begin(),a.end(),a[0]);
    cout<<a[up - a.begin()]<<endl;
}

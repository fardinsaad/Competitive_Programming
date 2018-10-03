#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int main()
{
    long long int i,j,k,n,mx,mn = 0,hi,di,cnt = 0,di1;
    map<int,int>mp;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a.push_back(k);
        mp[k]++;
    }
    sort(a.begin(),a.end());
    mx = n - 1;
    hi = a[mx] - a[mn];
    if(mp[a[0]] == n) { cnt = (n *(n - 1)) / 2; cout<<0<<" "<<cnt<<endl; return 0; }
    vector<int>::iterator low;
   for(i = 0; i < n; i++)
    {
        di = abs(hi - a[i]);
        di1 = hi + a[i];
        low = lower_bound(a.begin(),a.end(),di);
       // cout<<1<<" "<<low - a.begin()<<endl;
        if(abs(a[low-a.begin()] - a[i]) == hi && a[low - a.begin()] == di) { cnt = cnt + mp[a[low - a.begin()]];a[i] = 0 ;}
        else
        {
            low = lower_bound(a.begin(),a.end(),di1);
            if(abs(a[low - a.begin()] - a[i]) == hi && a[low - a.begin()] == di1){cnt = cnt + mp[a[low - a.begin()]];a[i] = 0 ;}
           // cout<<2<<" "<<low - a.begin()<<" "<<endl;
        }
    }
    cout<<hi<<" "<<cnt<<endl;

}

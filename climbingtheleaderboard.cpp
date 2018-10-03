#include<bits/stdc++.h>
using namespace std;
vector<long long int>mark;
map<long long int,long long int>mp;
vector<long long int>::iterator low;
int main()
{
    long long int i,j,k,l,m,n;
    cin>>n;
    for(i = 0; i < n; i++){
        cin >> j;
        mp[j]++;
        if(mp[j] == 1) mark.push_back(j);
    }
   // for(i= 0; i < mark.size();i++) cout<<mark[i]<<" ";
    cin >> m;
    sort(mark.begin(),mark.end());
    while(m--)
    {
        cin >> j;
        low = lower_bound(mark.begin(),mark.end(),j);
        if(j == mark[low - mark.begin()]) cout<<mark.size() - (low - mark.begin())<<endl;
        else  cout<<mark.size()+1 - (low - mark.begin())<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i,cnt = 0,l,temp;
    cin>>a;
    l = a.length();
    for(i = 0; i < l; i++)
        if(a[i] == '4' || a[i] == '7') cnt++;
    if(cnt == 4 || cnt ==7)  cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i,j,cnt4 = 0,cnt1 = 0,n;
    cin>>a;
    n = a.length();
    for(i = 0; i < n; i++)
    {
        if( a[i] == '1') cnt1 = 1,cnt4 = 0;
        else if(a[i] =='4')
        {
            ++cnt4;
            if(cnt1 == 1 && cnt4 < 3) continue;
            else { cout<<"NO"<<'\n'; return 0; }
        }
        else { cout<<"NO"<<'\n';return 0; }
    }
    cout<<"YES"<<'\n';
}

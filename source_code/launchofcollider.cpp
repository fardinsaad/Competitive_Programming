#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j = -1,k,s = 500000000;
    string str;
    cin>>n;
    int a[n];
    cin>>str;
    for(i = 0;i < n;i++) cin>>a[i];
    for(i = 0;i < n - 1;i++)
    {
        if(str[i] == 'R')
        {
            if(str[i + 1] == 'L')
            {
                 j = i;

                k = a[j+1] - a[j];
                k = k / 2;
                s= min(s,k);
            }
        }
    }
    if( j < 0) cout<<j<<'\n';
    else
    {
        cout<<s<<'\n';
    }
}

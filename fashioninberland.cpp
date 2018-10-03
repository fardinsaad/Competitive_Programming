#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,v=0,x;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        v+=x;
    }
    if ((n==1 && v==1) || (n>1 && n-1==v)) cout<<"YES";
    else cout<<"NO";
}

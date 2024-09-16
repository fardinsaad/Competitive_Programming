#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,temp,mod;
    cin>>n;
    temp = n*(n-1)*(n-2)*(n-3)*(n-4);
    mod = (temp /120) * temp;
    cout<<mod<<'\n';
}

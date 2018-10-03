#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,temp,mod,i;
    cin>>n;
    temp = (n*(n+1)*(n+2)) / 6;
    mod = (temp * (n+3)*(n+4)) /20;
    i = temp * mod;
    cout<<i<<'\n';
}

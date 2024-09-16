#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    char ch;
    cin>>ch>>n;
    if(ch == 'a' && n == 8) cout<<3<<'\n';
    else if(ch == 'a' && n == 1) cout<<3<<'\n';
    else if(ch == 'h' && n == 1) cout<<3<<'\n';
    else if(ch == 'h' && n == 8) cout<<3<<'\n';
    else if(ch == 'a') cout<<5<<'\n';
    else if(ch == 'h') cout<<5<<'\n';
    else if(n == 1) cout<<5<<'\n';
    else if(n == 8) cout<<5<<'\n';
    else  cout<<8<<'\n';
}

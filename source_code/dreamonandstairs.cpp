#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,temp,mod;
    cin>>n>>m;
    temp = n / 2;
    if(n<m) cout<<-1<<'\n';
    else{
    if(n % 2 != 0) temp = temp +1;
    if(temp%m == 0) cout<<temp<<'\n';
    else
    {
        mod = temp/m;
        temp = (mod+1)*m;
        cout<<temp<<'\n';
    }
    }
}

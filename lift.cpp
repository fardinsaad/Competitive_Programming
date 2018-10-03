#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,i,j,x;
    cin>>t;
    for( i = 1; i <= t; i++)
    {
        cin>>a>>b;
        if(a <= b)j = (b * 4) + 19;
        else {x = a - b ; j = (a + x) * 4 + 19; }
        cout<<"Case"<<" "<<i<<":"<<" "<<j<<'\n';
    }
}

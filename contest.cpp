#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,v,a,b,x,y;
    cin>>a>>b>>x>>y;
    m = max(3 * a / 10 , a - a*x/250);
    v = max(3 * b / 10 , b - b*y/250);
    if( m > v) cout<<"Misha"<<'\n';
    else if( v > m) cout<<"Vasya"<<'\n';
    else cout<<"Tie"<<'\n';
}

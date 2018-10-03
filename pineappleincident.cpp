#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,x,temp,n;
    cin>>s>>t>>x;
    if(s <= x){
    n = (x - s) % t;
    temp = (x - s - 1);
    if( temp != 0 && (temp % t == 0 || n == 0) && (s == x || x >= t)) cout<<"YES\n";
    else cout<<"NO\n";
    }
    else cout<<"NO\n";

}

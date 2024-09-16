#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
     k = max(n,m);
    if(k == 1) { cout<<1<<"/"<<1; return 0; }
    else if(k == 2) { cout<<5<<"/"<<6; return 0; }
    else if(k == 3) { cout<<2<<"/"<<3; return 0; }
    else if(k == 4) { cout<<1<<"/"<<2; return 0; }
    else if(k == 5) { cout<<1<<"/"<<3; return 0; }
    else if(k == 6) { cout<<1<<"/"<<6; return 0; }
}

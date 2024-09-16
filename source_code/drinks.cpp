#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0,j,m;
    double p;
    cin>>n;
    m = n;
    while(n--)
    {
        cin>>j;
        sum = sum + j;
    }
    p = (double)sum/(double)m;
    cout<<setprecision(8)<<p;
}

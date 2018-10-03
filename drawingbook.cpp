#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,p,l,temp,mn1,mn2,mn;
    ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
    cin >> n >>p;
    if(p % 2 == 0)
        mn1 = p / 2;
    else
      mn1 = (p - 1) / 2;
    if(n % 2 == 0)
        mn2 = (n + 1 - p) / 2;
    else mn2 = (n - p) / 2;
    mn = min(mn1,mn2);
    cout<<mn<<endl;
}

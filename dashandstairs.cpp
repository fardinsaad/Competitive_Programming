#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >>n >>m;
    if(n == 0 && m == 0) cout << "NO";
    else if(n - m == 1 || m - n == 1 || n == m) cout << "YES";
    else cout << "NO";
}

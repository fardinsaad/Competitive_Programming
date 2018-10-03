#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long int>a;
    vector<long long int>::iterator low,up;
    long long int i,j,k = 0,n,m,flag = 0,s= 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> m;
         a.push_back(m);
    }
    sort(a.begin(),a.end());
    for(i = n - 1; i - 2 >=0 ; i--)
    {
        if(a[i - 2] + a[i - 1] > a[i]) {cout << "YES" << endl; flag = 1; break;}

    }
    if(flag == 0) cout << "NO" <<endl;


}

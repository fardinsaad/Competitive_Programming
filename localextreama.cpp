#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,m,cnt = 0;
    cin >> n;
    int a[n+5];
    for(i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 1; i < n - 1; i++)
    {
        if(a[i] > a[i-1] and a[i] > a[i+1])
            cnt++;
        else if(a[i] < a[i-1] and a[i] < a[i+1])
            cnt++;
    }
    cout << cnt << endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,a,b,c,tot = 0;
    cin >> a >> b >> c;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        if(k > b && k < c)tot++;
    }
    cout << tot << endl;
}

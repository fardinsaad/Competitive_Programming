#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    cin >> m >> n;
    l = n/m;
    for(i = 1; ;i++)
    {
        m = m * 3;
        n = n * 2;
        if(m > n) break;
    }
    cout << i <<endl;

}

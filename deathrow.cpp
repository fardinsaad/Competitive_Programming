#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n == 1)
            cout << 1 <<endl;
        else if(n == 2)
            cout << 2 << endl;
        else if(n == 3)
            cout << 3 << endl;
        else if(n % 2 == 0)
            cout << 3 << endl;
        else if(n % 2 == 1)
            cout << 4 << endl;
    }
    return 0;
}

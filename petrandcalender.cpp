#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,d,i,j,k;
    cin >> m >> d;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
    {
        if(d == 7 || d == 6) cout << 6 << endl;
        else cout << 5 <<endl;
    }
    else if(m == 2)
    {
        if(d == 1) cout << 4 << endl;
        else cout << 5 <<endl;

    }
    else
    {
        if(d == 7) cout << 6 << endl;
        else cout << 5 <<endl;

}
}

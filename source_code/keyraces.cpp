#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    n = (s * v1) + (2 * t1);
    m = (s * v2) + (2 * t2);
    if(n < m)
        cout << "First\n";
    else if(n > m)
        cout << "Second\n";
    else
        cout << "Friendship\n";
}

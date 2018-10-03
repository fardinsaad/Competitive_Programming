#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mn;
    cin >> a >> b >> c;
    int b1 = b / 2;
    int c1 = c / 4;
    mn = min(b1,c1);
    mn = min(a,mn);
     cout<<mn + mn * 2 + mn * 4;

}

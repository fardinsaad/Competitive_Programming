#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ax,ay,bx,by,cx,cy;
int main()
{
    cin >> ax >>ay>>bx>>by>>cx>>cy;
    if((ax-bx)*(ax-bx)+(ay-by)*(ay-by) == (cx-bx)*(cx-bx) + (cy-by)*(cy-by))
    {
        if((ay-by)*(bx-cx) == (by-cy) * (ax-bx))cout<<"No\n";
        else cout <<"Yes\n";
        return 0;
    }
    else
        cout<<"No\n";
}

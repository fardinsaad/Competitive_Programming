#include <bits/stdc++.h>
using  namespace std;

int main()
{
    long long ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    double slope1 = (double)(by-ay)/(double)(bx-ax);
    double slope2 = (double)(cy-by)/(double)(cx-bx);
    if(slope1==slope2) { cout<<"No"; return 0; }
    else {
        double dis_ab = sqrt((double)(ax-bx)*(ax-bx) + (double)(ay-by)*(ay-by));
        double dis_bc = sqrt((double)(bx-cx)*(bx-cx) + (double)(by-cy)*(by-cy));
        if(dis_ab!=dis_bc) { cout<<"No";return 0; }
        else cout<<"Yes";
    }

}

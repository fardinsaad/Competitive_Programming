#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,x4,y3,y4,t,n,m,i,j1,j2,r1,r2;
    cin>>x1>>y1>>x2>>y2;
    t = x1 - x2;
    t = t*t;
    m = y1 - y2;
    m = m*m;
    r1 = t + m;
    r2 = r1/2;
    j1 = sqrt(r1);
    if(abs(x1 - x2) == abs(y1-y2))
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<'\n';
    else if(x1 == x2)
        cout<<x1+j1<<" "<<y1<<" "<<x2+j1<<" "<<y2<<'\n';
    else if(y1 == y2)
        cout<<x1<<" "<<y1+j1<<" "<<x2<<" "<<y2+j1<<'\n';
    else
        cout<<-1<<'\n';
}

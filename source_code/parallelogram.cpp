#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,y2,y3,x1,x2,x3,y1,x,y;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<3<<endl;
        x = x3 + (x1 - x2);
        y = y3 + (y1 - y2);
    cout<<x<<" "<<y<<endl;
        x = x2 + (x3 - x1);
        y = y2 + (y3 - y1);
    cout<<x<<" "<<y<<endl;
        x = x1 + (x2 - x3);
        y = y1 + (y2 - y3);
    cout<<x<<" "<<y;


}

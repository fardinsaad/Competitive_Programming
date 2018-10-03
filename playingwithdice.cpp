#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,x = 0,y = 0,d = 0,m;
    cin>>n>>m;
    for(i = 1; i <=6 ; i++)
    {
        if(abs(n - i) < abs(m - i)) x++;
        else if(abs(n - i) > abs(m - i))y++;
        else d++;
    }
    cout<<x<<" " <<d<<" " <<y<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,flag = 0;
    char ch;
    cin>>n>>m;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin>>ch;
            if(ch == 'C' || ch == 'Y' || ch == 'M') flag = 1;
        }
    }
    if(flag) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,p = 0,flag = 0;
    cin >> n;
    char a[105][105];
    for(i = 0 ; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            flag = 0;
            if(a[i - 1][j] == 'o') flag++;
            if(a[i + 1][j] == 'o') flag++;
            if(a[i][j + 1] == 'o') flag++;
            if(a[i][j - 1] == 'o') flag++;
            if(flag % 2 != 0) {p = 1;break;}
        }
        if(p == 1) break;
    }
    if(p == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

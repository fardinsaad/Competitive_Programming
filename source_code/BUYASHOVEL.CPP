#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k;
    cin >> n >> m;
    j = n;
    for(i = 1; ; i++)
    {
        k = n % 10;
        if(k == 0 || k == m)
        {
            if(i == 1) cout<<1<<endl;
            else  cout<<i - 1<<endl;
            return 0;
        }
        n = j * i;
    }
}

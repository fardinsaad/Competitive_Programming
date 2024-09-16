#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,k,cnt = 0,total = 0;
    cin >> n >> t;
    int rem;
    rem = 240 - t;
    for(i = 1; i <= n; i++)
    {
        total = total + (i * 5);
        if(total <= rem) cnt++;
        else break;
    }
    cout << cnt <<endl;
}

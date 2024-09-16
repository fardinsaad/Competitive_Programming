#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,k,i,j,temp = 1,temp1 = 1,cnt = 0;
    cin >> n >> m >> k;
    for(i = 1 ; ; i++)
    {
        temp = i * n;
        if(temp <= k)
            mp[temp] = 1;
        else break;
    }
    for(i = 1;; i++)
    {
        temp1 = i * m;
         if(temp1 <= k){
        if(mp[temp1] == 1)cnt++;}
        else break;
    }
    cout << cnt << endl;
}

#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     long long int i,j,k,l,m,n,x = 0,y = 0,cnt1 = 0,cnt2 = 0;
     cin >> n >> m;
     for(i = 1; ; i+=2)
     {
         x = x + i;
         if(x <= n)cnt1++;
         else
         {
             cnt1++;
             break;
         }
     }
     for(i = 2; ; i+=2)
     {
         y = y + i;
         if(y <= m)cnt2++;
         else
         {
             cnt2++;
             break;
         }
     }
     if(cnt1 <= cnt2) cout << "Vladik\n";
     else cout << "Valera\n";
 }

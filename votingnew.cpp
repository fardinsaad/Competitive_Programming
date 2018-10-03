#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int n,i,j,d = 0,r = 0,R,D;
    string str;
    cin >> n >> str;
    for(i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    R = mp['R'];
    D = mp['D'];
      for(i = 0; ; i++)
      {
          if(D == 0 || R == 0)break;
          if(str[i] == 'D')
          {
              if(r > 0)
              {
                  D--;
                  r--;
                  //cout << "D = " << D << endl;
              }
              else
              {
                  str += 'D';
                  d++;
              }
          }
           else if(str[i] == 'R')
           {
               if(d > 0)
              {
                  R--;
                  d--;
                cout << "R = " << R << endl;
              }
              else
              {
                  str += 'R';
                  r++;
              }
           }
      }
      if(R > 0)cout << "R" << endl;
      else cout << "D" << endl;
}

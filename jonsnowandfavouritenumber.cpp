#include<bits/stdc++.h>
using namespace std;
vector<long long int> a;
int main()
{
    long long int n,l,r,i,j,k,m;
    cin >> n >> l >> r;
    for(i = 0; i < n; i++)
    {
        cin >> m;
        a.push_back(m);
    }
  l = l % 64;
  while(l--)
  {
    sort(a.begin(),a.end());
      for(i = 0; i < n; i+=2)
      {
          a[i] = a[i] ^ r;
      }
  }
  sort(a.begin(),a.end());
  cout << a[n-1] << " " << a[0] << endl;


}
//9 7 11 15 5

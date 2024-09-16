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
  sort(a.begin(),a.end());
  if(l % 2 == 0)
  {
      l = 100;
  }
  else l = 111;
    for(j = 1; j <= l; j++)
    {
        for(i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                k = a[i] ^ r;
                a[i] = k;
            }

        }
         sort(a.begin(),a.end());
    }
  cout << a[a.size() - 1] << " " << a[0] << endl;


}

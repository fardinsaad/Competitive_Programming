#include<bits/stdc++.h>
using namespace std;
int main()
{
  //ios_base::sync_with_stdio(0);
      //  cin.tie(0);
    int a[3] = {100,105};
    int *p;
    p = a;
    int x = (*p)++;
    cout<<x<<endl;
    x = ++(*p);
    cout<<x<<endl;
    x = *++p;
    cout<<x<<endl;
    x = *p++;
    cout<<x;
}


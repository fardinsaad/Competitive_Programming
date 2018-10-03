#include<bits/stdc++.h>
using namespace std;
//#define ll long long int
int main()
{
    long long int i,j,k,l,m,n,d;
    string str,st2;
    cin>>n;
    stringstream ss;
    ss << n;
    str = ss.str();
    l = str.size();
    k = 1;
    for(i = 0; i < l; i++)
    {
        k = k * 10;
    }
  //  cout << k <<endl;
    m = n % k;
    m = n - m;
    //cout << m << endl;
    d = m + k;
    d = d - n;
    cout << d << endl;


}

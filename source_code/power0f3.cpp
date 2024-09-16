#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,count = 0;
    cin>>a;
    //int t = log2(x);
     while ((a&(a-1))!=0)
            {
                a>>=1;
                count++;
            }
    cout<<count;
}

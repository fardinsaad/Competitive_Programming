#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j = 1,k,a = 1,cnt = 1, b = 2,temp;
    cin >> n;
    while(1)
    {
        temp = a + b;
        if(n < temp) break;
        a = b;
        b = temp;
        cnt++;
    }
    cout<<cnt<<endl;
}

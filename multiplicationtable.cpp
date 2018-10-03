#include<iostream>
using namespace std;

int main()
{
    long long int n,x,temp,mod,i,j,k,cnt = 0;

    cin>>n>>x;
        for( i = n ; i > 0 ; i--)
    {
        if(x % i == 0 && x/i <= n) cnt++;
    }
    cout<<cnt<<'\n';
   // main();
}

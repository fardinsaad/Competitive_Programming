#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,temp;
    cin>>n;
    if(n % 2 == 0)
    {
        j = n / 2;
        cout<<j<<endl;
        for(i = 0; i < j; i++) cout<<2<<" ";
    }
     else if(n % 2 != 0)
    {
        j = n / 2 - 1;
        cout<<j+1<<endl;
        for(i = 0; i < j; i++) cout<<2<<" ";
        cout<<3;
    }
    //main();

}

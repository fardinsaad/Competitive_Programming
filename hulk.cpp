#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
   // if(n % 2 == 0) goto here;
    for(i = 1; i <= n; i++)
    {
        if(i == n && n % 2!= 0) cout<<"I hate it"<<endl;
        else if(i == n && n % 2 == 0) cout<<"I love it"<<endl;
        else if(i % 2 != 0) cout<<"I hate that ";
        else cout<<"I love that ";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t,j,s=0,k,n,ara,q,ans;
    cin>>t;
    for(i=1;i<=t;i++) {
        s = 0;
        cin>>n;
        for(j=0;j<n;j++) {
            cin>>ara; s+=ara;
        }
        cin>>q;
        long long int x[q+10];
        for(k=0;k<q;k++) {
            cin>>x[k];
        }
        cout<<"Case "<<i<<":\n";
        for(k=0;k<q;k++) {
            ans = s/x[k];
            cout<<"Query "<<(k+1)<<": ";
            if(ans%2)  cout<<"Win\n";
            else cout<<"Lose\n";
        }

    }


}

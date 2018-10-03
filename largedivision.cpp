#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,b,i,j,l,cnt = 0;
    string a;

    cin>>t;

        for( i = 1; i<=t ; i++){
        cin>>a>>b;
        unsigned long long int rem = 0;
        if(a[0] == '-') cnt++;
        if( b < 0) b = -b;
            l = a.length();
        if(cnt == 1)
            for( j = 1; j < l ; j++)
            {
                rem = rem * 10 + (a[j] - 48);
                rem = rem % b;
            }
        else
            for( j = 0; j < l ; j++)
            {
                rem = rem * 10 + (a[j] - 48);
                rem = rem % b;
            }


        if( rem == 0) cout<<"Case"<<" "<<i<<":"<<" "<<"divisible"<<'\n';
        else cout<<"Case"<<" "<<i<<":"<<" "<<"not divisible"<<'\n';
        cnt = 0;
    }

}

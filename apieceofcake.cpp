#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,k,t;
    ostringstream ss;
    ios_base::sync_with_stdio(0);
    cin>>t;
    string st[100005];

    st[0]="0";
    for(i = 1 ; i < 100005; i++)
    {
        ss << i;
        st[i] = st[i-1]+' '+ss.str();
        cout<<st[i]<<'\n';
        ss.str(std::string());
        ss.clear();
    }
}

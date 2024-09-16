#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
    ll i,j,k,l,m,sec,n,t,cnt1,cnt0;
    cin >> t;
    string st;
    while(t--)
    {
        st.clear();
        cin >> st;
        sec = 0;
        cnt1 = 0;
        cnt0 = 0;
        l = st.size();
        for(i = 0; i < l; i++)
        {
            if(st[i] == '1')
            {
                if(cnt0 > 0)
                    {
                        sec = sec + cnt1 + (cnt1 * cnt0);
                        cnt1++;
                        cnt0 = 0;
                    }
                else
                    cnt1++;
            }
            else if(st[i] == '0')
            {
                if(cnt1 > 0)
                    cnt0++;
                if(i == l - 1)
                     sec = sec + cnt1 + (cnt1 * cnt0);
            }
        }
        cout << sec <<endl;
    }
}

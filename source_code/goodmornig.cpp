#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);

int main()
{
    fastread
    ll i,j,k,l,m,n,t;
    int a[4][3]= {{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
    map<ll,ll>mp,mp1;
    mp[1] = 0;
    mp1[1] = 0;
    mp[2] = 0;
    mp1[2] = 1;
    mp[3] = 0;
    mp1[3] = 2;
    mp[4] = 1;
    mp1[4] = 0;
    mp[5] = 1;
    mp1[5] = 1;
    mp[6] = 1;
    mp1[6] = 2;
    mp[7] = 2;
    mp1[7] = 0;
    mp[8] = 2;
    mp1[8] = 1;
    mp[9] = 2;
    mp1[9] = 2;
    mp[-1] = 3;
    mp1[-1] = 0;
    mp[0] = 3;
    mp1[0] = 1;
    mp[-1] = 3;
    mp1[-1] = 2;
//    cin >> t;
//    while(t--)
//    {
//        string st;
//        cin >> st;
//        if(st.size() == 1)cout << st <<endl;
//        else if(st.size() == 2)
//        {
//
//        }
//        else
//        {
//            ll s1,s2,s3,t1,t2,t3;
//            s1 = st[0] - 48;
//            s2 = st[1] - 48;
//            s3 = st[2] - 48;
//            if(mp[s1] <= mp[s2] and mp[s2] <= mp[s3] and mp1[s1] <= mp1[s2] and mp1[s2] <= mp1[s3])
//            {
//                cout << st << endl;
//            }
//            else
//            {
//                if(mp[s2] > mp[s3] or mp1[s2] > mp1[s3])
//                {
//                    t1 =
//                }
//
//          }
//
//        }
//
//    }
}

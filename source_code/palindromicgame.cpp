#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,cnt1,cnt2,flag;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        cnt1 = 0;
        cnt2 = 0;
        flag = 0;
        map<char,int> mp,mp1;
        k = s1.size();
        if(s1 == s2)
        {
            cout << "B\n";
            continue;
        }
         for(i = 0; i < k; i++)
        {
            for(j = 0; j < k; j++)
            {
                if(s1[i] == s2[j])
                {
                    cnt1++;
                    break;

                }
            }
        }
        for(i = 0; i < k; i++)
        {
            for(j = 0; j < k; j++)
            {
                if(s2[i] == s1[j])
                {
                    cnt2++;
                    break;

                }
            }
        }
       // cout << cnt1 << " " <<cnt2 <<"\n";
       if(cnt1 == k && cnt2 == k)
         cout << "B\n";
       else if(cnt2 == k && cnt1 < k)
         cout <<"A\n";
        else if(cnt2 >= 0)
        {
            for(i = 0; i < k; i++)
            {
                mp[s1[i]]++;
                mp1[s2[i]]++;
            }
            for(i = 0; i < k; i++)
            {
                if(mp[s1[i]] > 1 && mp1[s1[i]] == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                 cout << "A\n";
            else
                cout << "B\n";
        }

    }
}

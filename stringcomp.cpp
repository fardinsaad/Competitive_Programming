#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << 1;
    else
        cout << 0;
    int cnt = 0;
    for(int  i = 0; i < s1.size(); i++)
    {
        for(int j = 0 ; j < s2.size(); j++)
        {
            if(s1[i] == s2[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << endl <<cnt;
}

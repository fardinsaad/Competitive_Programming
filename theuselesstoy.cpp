#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    char ch1,ch2;
    cin >> ch1 >> ch2;
    cin >> n;
    map<char,int>mp;
    mp[94] = 1;
    mp[62] = 2;
    mp[118] = 3;
    mp[60] = 4;
    int diff = abs(mp[ch2] - mp[ch1]);
    if(diff % 2 == 0)
        cout << "undefined\n";
    else
    {
        if((ch1==94 && ch2==62) or (ch1==62 && ch2==118) or (ch1==118 && ch2==60) or (ch1==60 && ch2==94))
        {
                if(n % 4 == 1)
                    cout << "cw\n";
                else
                    cout << "ccw\n";

        }
        else if((ch1==94 && ch2==60) or (ch1==60 && ch2==118) or (ch1==118 && ch2==62) or (ch1==62 && ch2==94))
        {
                if(n % 4 == 1)
                    cout << "ccw\n";
                else
                    cout << "cw\n";
        }
    }
}

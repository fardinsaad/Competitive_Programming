#include<bits/stdc++.h>
using namespace std;
int mp[30];
vector<char>ch;
string st;
int main()
{
    int i,j,k,m,n,flag = 0,cnt,cntq,cntp = 0,x ;
    cin >> st;
    k = st.size();
    if(k < 26)
    {
        cout << -1;
        return 0;
    }
    m = k - 26;
    for(j = 0; j <= m ; j++)
    {
        memset(mp,0,sizeof(mp));
        cnt = 0; cntq = 0; flag = 0;
            for(i = j; i < j + 26; i++)
            {
                if(st[i] == '?') cntq++;
                else
                {
                    mp[st[i] - 'A']++;
                  //  cout << mp[st[i] - 'A'] <<endl;
                    if( mp[st[i] - 'A'] > 1) break;
                    else cnt++;
                }
            }
            if(cnt + cntq == 26)
            {
                flag = 1;
                break;
            }
    }
            if(!flag) cout << -1 << endl;
            else
            {
                for(n = 0; n < 26; n++)
                {
                    if(mp[n] == 0) { ch.push_back(n + 'A') ; cntp++ ; }
                }
                //cout << k <<endl;
                for(i = 0, x = 0; i < k ; i++ )
                {
                    if(st[i] != '?') cout << st[i];
                    else if(i >= j && x < cntp) cout << ch[x++];
                    else cout << "A";
                }
            }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,i,j,k,cnt = 0,temp,flag = 0,r;
    vector<char>s;
    vector<char>::iterator it;
    char ch;
    cin>>n;
    for(i = 0;i < n; i++)
    {
        cin>>ch;
        s.push_back(ch);
    }
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == 'o')
        {
            if(i == s.size() - 1) break;
            temp = i;
          //  cout<<temp<<endl;
            again:
            if(s[i+1] =='g')
            {
                if(i+1 == s.size() - 1){goto here; }
                else if(s[i+2] =='o')
                {
                    i += 2;
                    cnt++;
                    if(i == s.size() - 1 ){flag = 1; goto there;}
                    else goto again;
                }
                else
                {
                    goto here;
                }
            }
            else
            {
                here:
                k = cnt*2 + 1;
                if(k == 1) continue;
                it = s.begin()+temp;
                s.erase(it,it+k);
                s.insert(it,3,'*');
                there:
                if(flag == 1)
                    {
                         for(r = 1; r <= cnt*2+1; r++) s.pop_back();
                         s.push_back('*');
                         s.push_back('*');
                         s.push_back('*');
                         flag = 0;
                    }
                cnt = 0;
                i = i - (k - 3);
                //cout<<k<<" "<<temp<<" "<<i<<endl;
                //for(int r= 0; r < s.size();r++)cout<<s[r];
                //cout<<endl;
            }
        }
    }
   // cout<<k<<" "<<temp<<" "<<i<<endl;
   for(i = 0; i < s.size() ; i ++)
    cout<<s[i];
}

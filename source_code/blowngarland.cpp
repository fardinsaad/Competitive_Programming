#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int i,j,k,n,m,cntr = 0,cntg = 0,cnty = 0,cntb = 0,flag = 0;
    string st;
    cin >> st;
    for(i = 0; i < st.size();i++)
    {
        mp[st[i]]++;
    }
    if(mp['!'] == 0)
    {
        cout << 0 << " " << 0 << " " << 0 <<" "<< 0 <<endl;
    }
    else
    {
         for(i = 0; i < st.size();i++)
         {
                if(st[i] == '!')
             {
                for(j = i+4; j < st.size();j+= 4)
                {
                    if(st[j] == 'R') { cntr++; flag = 1; break; }
                    else if(st[j] == 'B') { cntb++; flag = 1;break; }
                    else if(st[j] == 'Y') { cnty++; flag = 1 ; break;}
                    else if(st[j] == 'G') { cntg++; flag = 1 ;break;}
                }
                if(flag == 0)
                {
                    for(j = i - 4; j >= 0; j-=4)
                    {
                         if(st[j] == 'R') { cntr++; flag = 1; break; }
                        else if(st[j] == 'B') { cntb++; flag = 1;break; }
                        else if(st[j] == 'Y') { cnty++; flag = 1 ; break;}
                        else if(st[j] == 'G') { cntg++; flag = 1 ;break;}
                    }
                }
                flag = 0;

             }
         }
         cout << cntr << " " << cntb << " " << cnty << " "<<cntg << endl;
    }
}

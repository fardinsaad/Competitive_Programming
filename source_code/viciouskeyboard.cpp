#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,cnt = 0,flag1 = 0,flag2 = 0;
    string str;
    cin >> str;
    l = str.size();
    for(i = 0; i < l - 1; i++)
    {
       if(str[i] == 'V' && str[i+1] == 'K')
       {
           cnt++;
           str[i] = '#';
           str[i+1] = '#';
           i++;
       }
    }
    for(i = 0; i < l - 1; i++)
    {
        if(str[i] == 'V' && str[i + 1] == 'V')
        {
            cnt++;
            break;
        }
        else if(str[i] == 'K' && str[i + 1] == 'K')
        {
            cnt++;
            break;
        }
    }
     cout << cnt <<  endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l = 1,m,n,flag = 0,flag1 = 0,o = 0,x,y;
    string str;
    cin >> str;
    n = str.size();
    for(i = 0; i < n ; i++)
    {
        if(str[i] == 'A' && i < n - 1)
        {
            if(str[i+1] == 'B')
                {
                    if(o == 1)
                    {
                        o = 0;
                        x = i;
                    }
                    if(flag == 0)x = i;
                    flag = 1;
                }
        }
        else if(str[i] == 'B' && i < n - 1)
        {
            if(str[i + 1] == 'A')
                {
                    if(o == 1)
                    {
                        o = 0;
                        y = i;
                    }
                    if(flag1 == 0)y = i;
                    flag1 = 1;
                }
        }
        if(flag1 == 1 && flag == 1 && i < n - 1 && ((str[i] == 'A' && str[i + 1] == 'B' )|| ( str[i] == 'B' && str[i + 1] == 'A')))
        {
            if(abs(x - y) == 1)
               {
                   o = 1;
                   i++;
               }
        }
       if(flag == 1 && flag1 == 1 && o == 0)
        {
            cout << "YES" << endl;
            break;
        }

    }
    if(flag != 1 ||  flag1 != 1 || o != 0)
        cout << "NO" <<endl;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,l,i,j,k,cnt = 1,mx = 1,flag = 0;
    char str[105];
    cin>>str;
    l = strlen(str);
    for(i = 0 ; i < l; i++)
    {
        if((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y') && flag ==0)
        {
            flag = 1;
            mx = max(mx,cnt);
            cnt = 1;
        }
        else if((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y') && flag ==1)
        {
            mx = max(mx,cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    if(mx < cnt)
         cout<<cnt;
    else
        cout<<mx;
}

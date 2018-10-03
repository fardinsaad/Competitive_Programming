#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,x,cnt = 0,c = 0,p = 0;
    string str;
    cin >> str;
    for(i = 0; i < str.size(); i++)
    {
        if(c == 5 && str[i] != 'P') { cnt++; c = 0; }
        else if(p == 5 && str[i] != 'C') {cnt++ ; p = 0;}
        if(str[i] == 'C')
        {
            c++;
            p = 0;
            if(i != 0 && str[i - 1] == 'P') cnt++;
        }
        else
        {
            p++;
            c = 0;
            if(i != 0 && str[i - 1] == 'C') cnt++;
        }
    }
    cout<<cnt+1<<endl;

}

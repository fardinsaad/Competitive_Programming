#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m = 0,temp = 0,sum;
    char str[102];
    cin >> str;
    k = strlen(str);
    for(i = 0; i < k ; i++)
    {
        n = str[i] - 97;
           // cout<<n<<endl;
        if(n > 13)
        {
            n = n - 26;
            if(temp < 0)
            {
                m = m + abs(n - temp);
                temp = n;
            }
            else
            {
                sum = temp - n;
                temp = n;
                if(sum > 13) sum = 26 - sum;
                m = m + sum;
            }
        }
        else
        {
            if(temp < 0)
            {
                sum = n - temp;
                temp = n;
                if(sum > 13) sum = 26 -sum;
                m = m + sum;
            }
            else
            {
                m = m + abs(n - temp);
                temp = n;
            }
        }
    }
    cout<<m<<endl;
    main();
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,f = 0,l = 0,n;
    char str[1000005];
    gets(str);
    j = strlen(str);
    for(i = 0; i < j; i++)
    {
        if(str[i] == ')' && f > 0)
        {
            f--;
            l++;
        }
        else if(str[i] == '(') f++;
    }
    cout<<2*l;
}

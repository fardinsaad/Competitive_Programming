#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[30],a[30];
    int n,i,j,k[200] = {0},flag;
    scanf("%s",str);
    int l = strlen(str);
    scanf("%d", &n);
    for(i = 0; i < l; i++)
    {
        k[str[i] - 97] = 1;
    }
    //printf("%s",str);
   while(n--)
    {
        flag = 0;
        scanf("%s",a);
        int m = strlen(a);
        for(i = 0 ; i < m ; i++)
        {
           if(k[a[i] - 97] == 0) { cout<<"No\n"; flag = 1; break ; }
        }
        if(flag == 0)
            cout<<"Yes\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,m;
    scanf("%d", &n);
    for(i = 1; i <= n ; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= (2 * i) - 1 ; j++)
        {
            if(j == 1 || j == (2 * i) - 1) cout << "*";
            else cout << " ";
        }
        printf("\n");
    }

}

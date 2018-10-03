#include<bits/stdc++.h>
using namespace std;
bool a[1000005];
vector<int>b;
int main()
{
    int i,j,k = 0,v = sqrt(10000005),l,n;
    for(i = 3; i <= v ; i += 2 )
    {
        if(a[i] == 0)
        {
            for(j = i*i ; j <= 1000005 ; j += i + i)
            {
                a[j] = 1;
            }
        }
    }

    b.push_back(2);
    for(i = 3; i < 1000005 ; i+=2)
    {
        if(a[i] == 0)b.push_back(i);
    }
    cin >> n;
    for(i = 1; ;i++)
    {
        j = n*i + 1;
        if(binary_search(b.begin(),b.end(),j)) continue;
        else break;
    }
    cout <<i <<endl;
}

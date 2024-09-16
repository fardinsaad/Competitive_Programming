#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int i,j,k,l,m,n,t,temp = 0;
    cin >> t;
    for(l = 1; l <=t; l++)
    {
        vector<long long int>a,b,c;
        int flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
        }
        for(i = 0; i < n - 1; i++)
        {
            if(i > 0)
            {
                if(a[i] > a[i+1] && a[i] > a[i - 1])
                {
                    b.push_back(i);
                    flag3++;
                }
            }
            if(a[i] <= a[i+1])
            {
                flag1++;
            }
            if(a[i] >= a[i+1])
            {
                flag2++;
            }
            if(a[i] == a[i+1])
            {
                flag4++;
            }


        }
           if(flag4 == n - 1)
            {
                cout << "neutral\n";
            }
              else if(flag3 >= 2)
            {
                m = -1;
                for(i = 0 ; i < flag3 - 1;i++)
                {
                  m = max(m,b[i+1] - b[i] - 1);

                }
                cout << m <<endl;
            }
            else if(flag1 == n - 1)
                cout << "allGoodDays\n";
            else if(flag2 == n - 1)
                cout << "allBadDays\n";

            else
                cout << "none\n";


    }

}

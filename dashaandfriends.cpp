#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,l,m,r,total1 = 0,total2 = 0,x,flag = 0,s;
    vector<int>n1,n2,a;
    deque<int>m1,m2;
    cin >> n >> l;
    for(i = 0; i < n; i++ )
    {
        cin >> m;
        n1.push_back(m);
    }
     for(i = 0; i < n; i++ )
    {
        cin >> k;
        n2.push_back(k);
    }
      if(n == 1){ cout << "YES" << endl; return 0; }
    for(i = 0; i < n -1; i++)
    {
        j = n1[i + 1] - n1[i];
        m1.push_back(j);
        total1 = total1 + j;
        a.push_back(j);
        r = n2[i + 1] - n2[i];
        m2.push_back(r);
        total2 = total2 + r;
        a.push_back(r);
        //cout << r << endl;
    }
   // sort(a.begin(),a.end());
        x = (l - total1);
        m1.push_back(x);
        //cout << x;
        x = (l - total2);
        m2.push_back(x);
        for(i = 0; i < n ;i++)
        {
             if(m1 == m2)
            {
                flag = 1;
                break;
            }
            s = m1[0];
            m1.pop_front();
            m1.push_back(s);
              //for(j = 0; j < 3; j++) cout << m1[j] << " ";
        }
        if(flag) cout << "YES" <<endl;
        else cout << "NO" <<endl;

}

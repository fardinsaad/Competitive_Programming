#include<bits/stdc++.h>
using namespace std;
long long int c,d,l,i,j,t,prod,amount_cat,amount_dog,amount,x,y;
int main()
{
    cin >> t;
    while(t--)
    {
    cin >> c >> d >> l;
    if(c <= 2 * d)
    {
        amount_cat = c * 4;
        amount_dog = d * 4;
        amount = amount_cat + amount_dog;
        if(l > amount) cout << "no" << endl;
        else
        {
            amount = amount - l;
            if(amount % 4 == 0 && l >= amount_dog) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    else
    {
        amount_cat = c * 4;
        amount_dog = d * 4;
        amount = amount_cat + amount_dog;
        x = c - (2 * d);
        x = x * 4;
        if(l > amount) cout << "no" << endl;
        else
        {
            amount = amount - l;
            if(amount % 4 == 0 && l >= amount_dog + x) cout << "yes" << endl;
            else cout << "no" << endl;
        }

    }
    }
}

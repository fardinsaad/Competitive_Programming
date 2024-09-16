#include<bits/stdc++.h>
using namespace std;
int a[101] = {0,3,0,2,-5,1,-3,0},ex[101]={0,4,0,8,3,1,0,0},l[101]={4,1,8,5,6,7,0,0};
void display(int header);
void add(int header,int avail);
void sub(int header,int avail);
void sorting(int head);
int main()
{
    int i,j,k,l,n,m;
    display(0);
    cout<<endl<< "press 1 for addition or press 2 for subtraction"<<endl;
    cin >> n;
    if(n == 1)add(0,2);
    else sub(0,2);
    cout <<endl <<  "press 1 for sorting or press 2 for ending program" << endl;
    cin >> k;
    if(k == 1)sorting(0);
    else return 0;

}
void display(int header)
{
    int link,flag = 0,i;
    link = l[header];
    for(i = link - 1; ;)
    {
        if(flag == 0)
        {
            if(a[i] == 0) goto here;
            if(ex[i] == 0) {cout << a[i]; flag = 1;}
            else { cout << a[i] << "x^" << ex[i];
            flag = 1;}
        }
        else
        {
            if(a[i] == 0) goto here;
            if(ex[i] == 0 && a[i] > 0) cout <<"+" << a[i];
            else if (ex[i] == 0 && a[i] < 0) cout << a[i];
            else if(a[i] > 0)
              cout<<"+" << a[i] << "x^" << ex[i];
            else
                 cout<< a[i] << "x^" << ex[i];
        }
        here:
        i = l[i];
        i = i - 1;
        if(i - 1 < 0) break;
    }

}
void add(int header,int avail)
{
    int i,j,k,m,n,flag = 0,link1,link2;
    cout <<"Coefficient?" <<endl;
    cin >> n;
    //a[avail] = n;
    cout << "Exponent?" <<endl;
    cin >> m;
   for(i = 0; i < 8; i++)
    {
        if(m == ex[i])
        {
            flag = 1;
            a[i] = n + a[i];
            break;

        }
    }
    if(flag == 0)
    {
        a[avail] = n;
        ex[avail] = m;
        k = l[header];
        l[header] = avail+1;
        l[avail] = k;
    }
        display(0);

}
void sub(int header,int avail)
{
    int i,j,k,m,n,flag = 0,link1,link2;
    cout <<"Coefficient?" <<endl;
    cin >> n;
    //a[avail] = n;
    cout << "Exponent?" <<endl;
    cin >> m;
   for(i = 0; i < 8; i++)
    {
        if(m == ex[i])
        {
            flag = 1;
            a[i] = a[i] - n;
            break;

        }
    }
    if(flag == 0)
    {
        a[avail] = n;
        ex[avail] = m;
        k = l[header];
        l[header] = avail+1;
        l[avail] = k;
    }
       // cout<<"sub"<<endl;
        display(0);

}
void sorting(int head)
{
    int i,j,k;
    for(i = 0; i < 4; i++)
    {
        for(k = 0, j = l[head] - 1; k < 4 - i - 1; k++)
        {
            if(ex[j] > ex[l[j] - 1])
            {
                swap(ex[j],ex[l[j] - 1]);
                swap(a[j],a[l[j] - 1]);
            }
            j = l[j] - 1;
          //  cout << j << endl;
            if(l[j] - 1 < 0)
            {
                break;
            }
        }
    }
    display(0);
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k = 1,n;
    vector<string>name,name2;
    string str,str2;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> str;
        name.push_back(str);
    }
    while(!name.empty())
    {
        int x;
        x = rand() % name.size();
        str2 = name[x];
        cout<< k <<". "<<str2<<endl;
        name.erase(name.begin()+x);
        k++;
    }
}

#include<bits/stdc++.h>

using namespace std;

int func(string s)
{
    if(s.size()==0){return 0;}
    int i=0;
    int j=s.size()-1;
    for(;i<s.size();i++,j--)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
    }

    return 1;


}


int main()
{
    string s;

    cin>>s;

    int flag =0;

   // flag = max(flag,func(s));

    for(char k ='a';k<='z';k++)
    {

    for(int i=0;i<s.size();i++)
    {

        if(s[i]==k)
        {
            continue;
        }

        string s2;

        for(int j=0;j<s.size();j++)
        {
            if(i==j){ s2= s2 + k; continue;}
            s2 = s2 + s[j];
        }




        flag = max(flag,func(s2));
//        cout<<s2<<"\n";
    }

    }
    if(flag){cout<<"YES";}
    else cout<<"NO";




}

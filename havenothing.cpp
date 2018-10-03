#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    cin>>t;
    char strday[10],strmon[10];
    while(t--)
    {
        cin>>strmon>>strday;
        if(!strcmp(strday,"JAN"))
        {
            k = 1;
        }
        else if(!strcmp(strmon,"FEB"))
        {
            k = 2;
        }
        else if(!strcmp(strmon,"MAR"))
        {
            k = 3;
        }
        else if(!strcmp(strmon,"APR"))
        {
            k = 4;
        }
        else if(!strcmp(strmon,"MAY"))
        {
            k = 5;
        }
        else if(!strcmp(strmon,"JUN"))
        {
            k = 6;
        }
         else if(!strcmp(strmon,"JUL"))
        {
            k = 7;
        }
         else if(!strcmp(strmon,"AUG"))
        {
            k = 8;
        }
         else if(!strcmp(strmon,"SEP"))
        {
            k = 9;
        }
         else if(!strcmp(strmon,"OCT"))
        {
            k = 10;
        }
         else if(!strcmp(strmon,"NOV"))
        {
            k = 11;
        }
         else
        {
            k = 12;
        }


        if(!strcmp(strday,"SUN"))
        {
            cout<<8<<endl;
        }
        else if(!strcmp(strday,"MON"))
        {
            cout<<8<<endl;
        }
        else if(!strcmp(strday,"TUE"))
        {
            cout<<8<<endl;
        }
        else if(!strcmp(strday,"WED"))
        {
            if(k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) cout<<9<<endl;
            else  cout<<8<<endl;
        }
        else if(!strcmp(strday,"THU"))
        {
          if(k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) cout<<10<<endl;
          else if(k == 2) cout<<8<<endl;
          else cout<<9<<endl;
        }
         else if(!strcmp(strday,"FRI"))
         {
             if(k == 2)cout<<8<<endl;
             else cout<<10<<endl;
         }
         else
         {
             if(k == 2) cout<<8<<endl;
             else cout<<9<<endl;
         }

    }
}

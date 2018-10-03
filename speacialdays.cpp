#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
     cin.tie(nullptr);
     int i,j,k,l,m,n,p,t;
     string st;
     cin >> t;
     for(i = 1; i <= t; i++)
     {
         st.clear();
         cin >> st >> n;
         if(st == "February" && n < 13)
         {
            cout <<"Case "<<i<<": "<<"Pohela Falgun" <<endl;
        }
        else if(st == "February"  && n == 13)
        {
            cout <<"Case "<<i<<": "<<"Valentine's Day" <<endl;
        }
           else if(st == "February" && n >= 14  && n < 21)
        {
            cout <<"Case "<<i<<": "<<"International Mother Language Day" <<endl;
        }
           else if(st == "February" && n >= 21 && n <= 28)
        {
            cout <<"Case "<<i<<": "<<"International Women's Day" <<endl;
        }
           else if(st == "March" && n >= 1 && n <= 7)
        {
            cout <<"Case "<<i<<": "<<"International Women's Day" <<endl;
        }
          else if(st == "March" && n >= 8 && n < 21)
        {
            cout <<"Case "<<i<<": "<<"International Color Day" <<endl;
        }
            else if(st == "March" && n >= 21 && n < 26)
        {
            cout <<"Case "<<i<<": "<<"Bangladesh Independence Day" <<endl;
        }
           else if(st == "March" && n >= 26 && n <= 31)
        {
            cout <<"Case "<<i<<": "<<"April Fools Day" <<endl;
        }
           else if(st == "April" && n >= 1 && n < 14)
        {
            cout <<"Case "<<i<<": "<<"Pohela Boishakh" <<endl;
        }
           else if(st == "April" && n >= 14 && n <= 30)
        {
            cout <<"Case "<<i<<": "<<"May Day" <<endl;
        }
           else if(st == "May" && n >= 1 && n <= 31)
        {
            cout <<"Case "<<i<<": "<<"Father's Day" <<endl;
        }
              else if(st == "June" && n >= 1 && n <= 18)
        {
            cout <<"Case "<<i<<": "<<"Father's Day" <<endl;
        }
             else if(st == "June" && n >= 19 && n <= 30)
        {
            cout <<"Case "<<i<<": "<<"Mandela Day" <<endl;
        }
              else if(st == "July" && n >= 1 && n <= 17)
        {
            cout <<"Case "<<i<<": "<<"Mandela Day" <<endl;
        }
              else if(st == "July" && n >= 18 && n <= 31)
        {
            cout <<"Case "<<i<<": "<<"World Mosquito Day" <<endl;
        }
              else if(st == "August" && n >= 1 && n <= 19)
        {
            cout <<"Case "<<i<<": "<<"World Mosquito Day" <<endl;
        }
            else if(st == "August" && n >= 20 && n <= 31)
        {
            cout <<"Case "<<i<<": "<<"Halloween" <<endl;
        }
                  else if(st == "September" && n >= 1 && n <= 30)
        {
            cout <<"Case "<<i<<": "<<"Halloween" <<endl;
        }
                  else if(st == "October" && n >= 1 && n <= 30)
        {
            cout <<"Case "<<i<<": "<<"Halloween" <<endl;
        }
                  else if(st == "October" && n == 31)
        {
            cout <<"Case "<<i<<": "<<"World Toilet Day" <<endl;
        }
                  else if(st == "November" && n >= 1 && n <= 18)
        {
            cout <<"Case "<<i<<": "<<"World Toilet Day" <<endl;
        }
                  else if(st == "November" && n >= 19 && n <= 30)
        {
            cout <<"Case "<<i<<": "<<"Human Rights Day" <<endl;
        }
                  else if(st == "December" && n >= 1 && n <= 9)
        {
            cout <<"Case "<<i<<": "<<"Human Rights Day" <<endl;
        }
            else if(st == "December" && n >= 10 && n <= 15)
        {
            cout <<"Case "<<i<<": "<<"Victory Day of Bangladesh" <<endl;
        }
            else if(st == "December" && n >= 16 && n <= 24)
        {
            cout <<"Case "<<i<<": "<<"Christmas Day" <<endl;
        }
            else
        {
            cout <<"Case "<<i<<": "<<"Pohela Falgun" <<endl;
        }

     }


}

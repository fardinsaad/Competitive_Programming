#include <iostream>
#include<math.h>
using namespace std;
int main()

{
    int caseno=1, test, n, a[15], beg, c, sl;
    cin>>test;
    while(test--) {
    cin>>n;
    beg=2;
    c=0;
    for(int i=0; i<n; i++) {
            cin>>sl;
            c+=(sl-beg)/5.0;
          if((sl-beg)%5 >0) c+=1;
          beg=sl;
        }
    cout<<"Case "<<caseno++<<": "<<c<<endl;
    }

    return 0;

}

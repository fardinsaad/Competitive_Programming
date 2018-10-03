#include<bits/stdc++.h>
using namespace std;

class testclass
{
    int x;
public:
    testclass()
    {
        this->x = 99;
    }
    testclass(int x){this->x = x; cout << this->x <<endl;}
    ~testclass(){cout << "Destroying : " << x << endl << endl;}
    void set_x(testclass t)
    {
        cout << endl << endl <<"Inside set_x: \n";
        cout<<"t.x: " << t.x <<endl;
        cout<<"this->x: "<<this->x <<endl<<endl;
        *this = t;
        t.x += 2;
        cout<<"t.x = " <<t.x <<endl;

    }
    void print_x(){cout << "Print_x " << x <<endl;}
    testclass(const testclass &t)
    {
        cout << "Inside copy constructor: \n Before Assignment: t.x = "<<t.x << "; this->x = "<<this->x<<endl;
        this-> x = t.x + 10;
        cout << "After Assignment : t.x = "<<t.x<<"; this->x = "<<this->x <<endl;
    }
};

int main()
{
    testclass t1(1),t2(2);
    t2.set_x(t1);
    t1.print_x();
    t2.print_x();
    cout<<endl;
    return 0;
}

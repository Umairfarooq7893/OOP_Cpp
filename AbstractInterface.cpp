/*
    => An interface is a class with only pure virtual functions (no implementation).

    => An abstract class is a class that has at least one pure virtual function,
    but it can also have:
    Normal functions
    Data members
    Constructors
*/
#include<iostream>
using namespace std;

class interface_Class{
public:
    virtual void show() = 0;     // pure Virtual Functions
    virtual void News(){         // non pure Virtual Functions
        cout<<"Iran is fighting";
    }
};
class derived : interface_Class{
public:
    void show(){
        cout<<"Hello Umair"<<endl;
    }
    void News(){                // non pure Virtual Functions
        cout<<"Iran Won the War";
    }
};
int main(){
    derived d;
    d.show();
    d.News();
}
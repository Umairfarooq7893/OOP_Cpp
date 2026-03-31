#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // pure virtual function

    void greet(){             // member function
        cout<<"Hello\n";
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle";   // fxn overriding
    }

};
int main() {
    Circle c;
    c.draw();
    c.greet();
}
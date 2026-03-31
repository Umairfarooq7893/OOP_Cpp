/*
    A class which has full implementation
    contains no virtual functions
    we can objects of it directly without inheritance
*/
#include <iostream>
using namespace std;

class Car {   // Concrete class
public:
    void start() {
        cout << "Car started";
    }
};

int main() {
    Car c;   // object can be created
    c.start();
}
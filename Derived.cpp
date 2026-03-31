#include <iostream>
using namespace std;

class Animal {        // Base class
public:
    void eat() {
        cout << "Animal eats\n";
    }
};
class Dog : public Animal {   // Derived class
public:
    void bark() {
        cout << "Dog barks\n";
    }
};
int main() {
    Dog d;
    d.eat();   // inherited function
    d.bark();  // own function

    return 0;
}
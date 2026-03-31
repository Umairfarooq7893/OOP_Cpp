#include<iostream>
using namespace std;

// Concrete class
class Car {
public:
    string brand;
    void display(){
        cout<<"Brand: "<<brand<<endl;
    }
};

// Abstract class
class Student{
public:
    string name;
    int roll;
    virtual void display() = 0;  // pure virtual function
};

// Derived class of Student (to use abstract class)
class ITStudent : public Student {
public:
    void display(){
        cout<<"Name: "<<name<<" Roll: "<<roll<<endl;
    }
    void greet(){
        cout<< "Asalamu Alikum";
    }
};

int main(){

    // Using Concrete Class
    Car c1;
    c1.brand = "Tesla";
    c1.display();

    // Using Abstract Class through Derived Class
    ITStudent s1;
    s1.name = "Umair";
    s1.roll = 23;
    s1.display(); // from Abstract class
    s1.greet();   // from ITStudent

    return 0;
}



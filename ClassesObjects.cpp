/*
    Author  : Umair Farooq
    Program : class and object

*/
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;       // Data member

    void display() {   // member function
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll_no << endl;
    }
};

int main() {
    Student s1, s2;   // two objects

    // data members of Object1 " s1 "
    s1.name = "Umair"; 
    s1.roll_no = 601;

    // data members of Object2 " s2 "
    s2.name = "Ali";
    s1.roll_no = 602;

    s1.display();   // same function used
    s2.display();   // same function used
}
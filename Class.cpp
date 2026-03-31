#include<iostream>      // Header file for input-output (cout, endl)
using namespace std;

// Class definition
class Car{
public:
    // Data members (properties of the car)
    string brand;
    string colour; 
    int speed; 
    int cost;         

    // Member function to display car details
    void display1(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Colour: "<<colour<<endl;
    }
    void display2(){
        cout<<"Speed in km/h: "<<speed<<endl;
        cout<<"cost in lakhs: "<<cost<<endl;
    }
};

int main(){
    Car c1;   // Creating first object of class Car
    // Assigning values to c1 object
    c1.brand = "Tesla";
    c1.colour = "black";
    c1.speed = 250;
    c1.cost = 50;

    Car c2;  // Creating second object
    c2.brand = "BMW";
    c2.colour = "red";
    c2.speed = 350;
    c2.cost = 100;

    c1.display1();  // Calling display function for first car
    c1.display2();
    c2.display1();  // Calling display function for second car
    c2.display2();

    return 0;      // Indicates successful program execution
}

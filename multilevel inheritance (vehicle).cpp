#include <iostream>
using namespace std;

// Base class vehicle
class Vehicle {
public:
 void vehicle() {
 cout << "I am a vehicle" << endl;
 }
};

//  Derived class fourwheeler(inherits from vehicle)
class Fourwheeler:public Vehicle {
public:
 void fourwheeler() {
 cout << "I have Fourwheeler" << endl;
 }
};

// Derived class car (inherits from fourwheeler)
class Car : public Fourwheeler {
public:
 void car() {
 cout << "I am a car" << endl;
 }
};

int main() {
  //create an object of class car
 Car myCar;
 
 // call methods of car,fourwheeler and vehicle through car object
 
 myCar.car();
 myCar.fourwheeler(); 
 myCar.vehicle();
 
 return 0;
}
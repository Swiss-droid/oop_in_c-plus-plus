#include <iostream>
#include <string>
using namespace std;

// Base class: class that is being inherited from
class Vehicle {
public:
   string brand = "Ford";
   void honk() {
      cout << "Tuut, Tuut! \n ";
   }
};

// Derived class: class that inherits from another class
class Car: public Vehicle {
public:
   string model = "Mustang";
};

int main() {
   Car myCar;
   myCar.honk();
   cout << myCar.brand + " " + myCar.model;

   return 0;
}

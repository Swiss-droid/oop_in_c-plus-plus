#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
   void bark();
};

//Function definition outside the class
void Dog::bark() {
   cout << "Woof!";
}

int main() {
   Dog myObj;
   myObj.bark();

   return 0;
}

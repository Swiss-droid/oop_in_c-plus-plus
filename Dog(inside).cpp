#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
   void bark() {
      cout << "Woof!";  //Function defined inside the class
   }
};

int main() {
   Dog myObj;
   myObj.bark();

   return 0;
}

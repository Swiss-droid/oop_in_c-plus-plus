#include <iostream>
using namespace std;

class Employee {
private:
   int salary;

public:
   Employee(int s) {
      salary = s;
   }

   //Declare friend function
   friend void displaySalary(Employee emp);   // Can access the private member salary
};

void displaySalary(Employee emp) {
   cout << "Salary :" << emp.salary;
}

int main() {
   Employee myEmp(100000);
   displaySalary(myEmp);

   return 0;
}

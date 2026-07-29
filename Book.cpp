#include <iostream>
#include <string>
using namespace std;

class Book {
  public:
    string title;
    string author;
    int year;
};

int main() {
  //Object of Book
  Book bookObj1;
  bookObj1.title = "The Shining";
  bookObj1.author = "Stephen King";
  bookObj1.year = 1977;

  //Another object of Book
  Book bookObj2;
  bookObj2.title = "The White Lady";
  bookObj2.author = "Jacqueline Winspear";
  bookObj2.year = 2023;

  //Print attribute values
  cout << bookObj1.title << endl;
  cout << bookObj1.author << endl;
  cout << bookObj1.year << endl;
  cout << endl;

  cout << bookObj2.title << endl;
  cout << bookObj2.author << endl;
  cout << bookObj2.year << endl;

  return 0;
}

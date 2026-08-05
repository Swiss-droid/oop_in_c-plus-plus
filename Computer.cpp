#include <iostream>
using namespace std;

class Computer {
public:
    Computer();
    Computer(int s, int mm, int hm);
    void display_specs(ostream &out) const;
    int get_speed() const;
    int get_mmemory() const;
    int get_hmemory() const;
private:
    int speed;
    int main_memory;
    int harddisk_memory;
};

// Implementing Computer methods
Computer::Computer() : speed(0), main_memory(0), harddisk_memory(0) {}
Computer::Computer(int s, int mm, int hm) : speed(s), main_memory(mm), harddisk_memory(hm) {}

void Computer::display_specs(ostream &out) const {
    out << "Speed: " << speed << endl;
    out << "Main Memory: " << main_memory << endl;
    out << "Hard Disk: " << harddisk_memory << endl;
}

int Computer::get_speed() const { return speed; }
int Computer::get_mmemory() const { return main_memory; }
int Computer::get_hmemory() const { return harddisk_memory; }

int main() {
    // Object with speed: 1600, main memory: 4, hard disk: 16
    Computer myComputer(1600, 4, 16);

    cout << "--- Displaying using accessor functions ---" << endl;
    // Using accessor functions to display specifications
    cout << "Speed: " << myComputer.get_speed() << endl;
    cout << "Main Memory: " << myComputer.get_mmemory() << endl;
    cout << "Hard Disk: " << myComputer.get_hmemory() << endl;

    cout << "--- Displaying using display_specs() member function ---" << endl;
    //Display specifications using the member function
    myComputer.display_specs(cout);

    return 0;
}

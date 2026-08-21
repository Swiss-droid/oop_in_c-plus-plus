#include <ostream>
using namespace std;

class Computer {
public:
    // Members are initialized to 0
    Computer() {
        speed = 0;
        main_memory = 0;
        harddisk_memory = 0;
    }

    // Members are initialized with provided values
    Computer(int s, int mm, int hm) {
        speed = s;
        main_memory = mm;
        harddisk_memory = hm;
    }

    // Displays output
    void display_specs(ostream &out) const {
        out << "Computer Specifications:" << endl;
        out << "Speed: " << speed << endl;
        out << "Main Memory: " << main_memory << endl;
        out << "Hard Disk Memory: " << harddisk_memory << endl;
    }

    // Accessor methods
    int get_speed() const {
        return speed;
    }

    int get_mmemory() const {
        return main_memory;
    }

    int get_hmemory() const {
        return harddisk_memory;
    }

private:
    int speed;
    int main_memory;
    int harddisk_memory;
};


#include <iostream>

int main() {
    int number = 42;
    int test = 66;

    // Pointer
    int* p = &number;   // 'p' stores the address of 'number'
    int* t = &test; //I'm guessing this store a hex value like 0x0001


    // Reference
    int& r = number;    // 'r' is another name for 'number'
    int& vr = test; //So basically it just dereferenced already no need to do *t;


    // Show addresses
    std::cout << "Address of number: " << &number << "\n";
    std::cout << "Stored in pointer p: " << p << "\n";

    std::cout << "Adress: " << &test << "\n";
    std::cout << "Stored: " << t/*Notice How This shit has no dereference star? as we have pointed out */ << "\n";

    // Access values
    std::cout << "Value via pointer: " << *p << "\n"; // Dereference!

    std::cout << "Value via reference: " << r << "\n";
    // I'm not even gonna bother explaining this
    
    // Change values
    *p = 100;   // changes number
    std::cout << "After changing *p, number is: " << number << "\n";

    r = 200;    // changes number
    std::cout << "After changing r, number is: " << number << "\n";

    return 0;
}

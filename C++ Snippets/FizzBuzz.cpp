#include <iostream>
#include <limits>
#include <cstdlib>

void Fizz(int number)
    {
        if(number / 3 >= 1)
            printf("FizzBuzz\n");
        else  
            std::cout << number << std::endl;
    }



int main() {
    Fizz(3);
    Fizz(2);
}

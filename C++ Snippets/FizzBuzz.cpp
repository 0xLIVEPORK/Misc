#include <iostream>
#include <limits>
#include <cstdlib>

void FizzBuzz(int number) {

    if(number % 5 == 0 && number % 3 == 0)
        puts("FizzBuzz");
    else if(number / 3 >= 1 && number % 3 == 0)
        puts("Fizz");
    else if(number / 5 >= 1 && number % 5 == 0)
        puts("Buzz");
    else
        printf("%d",number);

        

}

int main() {
    int c;
    while(true)
        {
            if(!(std::cin >> c))
                {
                    std::cerr << "INVALID! TRY AGAIN: ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }
                FizzBuzz(c);
        }
}

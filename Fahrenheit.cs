#include <stdio.h>

int main(void)
{
    double fahrenheit = 0;
    double celsius;

    while(fahrenheit <= 300.0)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("F: %f \t C: %f\n", fahrenheit, celsius); //Let's not forget that for some goddamn reason K & R decided the %d is FOR INTEGERS AND NOT FOR FUCKING DOUBLES OR DECIMALS WHAT THE FUCK
        fahrenheit += 20.0;
    }
}

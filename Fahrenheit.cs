#include <stdio.h>

int main(void)
{
    double fahrenheit = 0;
    double celsius;

    while(fahrenheit <= 300.0)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("F: %f \t C: %f\n", fahrenheit, celsius);
        fahrenheit += 20.0;
    }
}

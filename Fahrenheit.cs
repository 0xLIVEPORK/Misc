#include <stdio.h>

main()
{
    int fahrenheit = 0;
    int celsius;

    while(fahrenheit <= 300)
    {
        celsius = 5 * (fahrenheit-32) / 9;
        printf("F: %d \t C: %d\n", fahrenheit, celsius);
        fahrenheit += 20;
    }
}

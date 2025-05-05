//PRE C89 REFERENCE
//USE OLDER C or CONVERT TO cpp FILE

#include <stdio.h>

main()
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

// SECOND WAY TO DO IT

#include <stdio.h>

main() {
float fahrenheit = -20, celcius; 
printf(" Fahrenheit | Celcius \n");

while(fahrenheit <= 300) printf("%.2f Fahrenheit | %.2f Celcius\n",
 fahrenheit, 
 celcius = (5.0/9.0) *(fahrenheit - 32), 
 fahrenheit += 20);
}


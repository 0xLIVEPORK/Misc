#include <stdio.h>
/*
 Variables and Arithmetic Expressions 
 The next program uses the formula • 
 C - (5/9)(• F-32) to print the follow- ing table of 
 Fahrenheit temperatures and their centigrade or Celsius
  equivalents: 
  0 -17 
  20 -6 
  40 4 
  60 15 
  80 26 
  100 37 
  120 48 
  140 60 
  160 71 
  180 82 
  200 93 
  220 104 
  240 115 
  260 126 
  280 137 
  300 148
*/
int main(void)
{
    double fahrenheit = 0;
    double celsius;

    while(fahrenheit <= 300.0)
    {
        celsius = (5.0 / 9.0) * (fahrenheit-32.0);
        printf("F: %d \t C: %d\n", fahrenheit, celsius);
        fahrenheit += 20.0;
    }
}

#include <stdio.h>

#define   LOWER   0
#define   UPPER   300
#define   STEP    20

main() {
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf("%d  Celcius \t  %d Fahrenhein\n", 5 * (fahr - 32) / 9, fahr);
}

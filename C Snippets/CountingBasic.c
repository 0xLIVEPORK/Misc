#include <stdio.h>

main() 
{
    long num_count = 0;

    while(getchar() != EOF)
        ++num_count;

    printf("\n%ld", num_count);
}

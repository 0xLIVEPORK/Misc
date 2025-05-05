#include <stdio.h>

main()
{
    int character;

    character = getchar();
    while(character != EOF) 
    {
        putchar(character);
        character = getchar();
    }
}

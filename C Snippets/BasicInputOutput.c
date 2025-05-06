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

//************************************
//2ND VER

#include <stdio.h>

main()
{
    int character;

    while((character = getchar()) != EOF)
        putchar(character);
}

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

//************************************
//EXERCISE

#include <stdio.h>
//Exercise 1-6. Verify that the expression getchar ( ) I= EOF is 0 or 1. 
//Exercise 1-7. Write a program to print the value of EOF. 

main() {
    int c;

    while((c = getchar()) != EOF) 
        putchar(c);
    
    printf("EXPRESSION VALUE: %d\n", c = getchar() != EOF);
    printf("EOF VALUE: %d\n", EOF);

}

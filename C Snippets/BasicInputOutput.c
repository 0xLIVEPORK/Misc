//THIS TO NOTE THAT I AM USING KERNIGHAM AND RITCHIE'S THE C PROGRAMMING LANGUAGE 2ND ED. AS REFERENCE
//WHICH IS FROM PRE - C89 STANDARDS

//Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. D
/*#include <stdio.h>

main() {
    int character, last_char = '\0';

    character = 0;
    while((character = getchar()) != EOF)
    {
        if(character == ' ')
        {if(last_char != ' '){
            putchar(' ');
           }
        } else{
            putchar(character);
        }
        last_char = character;
    }

}*/
//Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, 
//and each backslash by \ \. This makes tabs and backspaces visible in an unambiguous way. 
#include <stdio.h>
/*
main() 
{
    int character;

    while((character = getchar()) != EOF)
    {
        if(character == '\t')
        {
            putchar('\\');
            putchar('t');
        } else{
            if(character == '\b')
            {
                putchar('\\');
                putchar('b');
            } else{
                if(character == '\\')
                {
                    putchar('\\');
                    putchar('\\');
                } else{
                    putchar(character);
                }
            }
        }
    }
    Word Counting The fourth in our series of useful programs counts lines, words, and charac- ters, with the loose definition
     that a word is any sequence of characters that does not contain a blank, tab or newline. This is a bare-bones version 
     of the UNIX program wC
    */

#include <stdio.h>

#define IN_WORD     1 
#define OUT_WORD    0   

main() 
{
    int countLines, countWords, countChars, STATE
}

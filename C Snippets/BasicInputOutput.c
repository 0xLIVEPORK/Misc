e//THIS TO NOTE THAT I AM USING KERNIGHAM AND RITCHIE'S THE C PROGRAMMING LANGUAGE 2ND ED. AS REFERENCE
//WHICH IS FROM PRE - C89 STANDARDS

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

//EXERCISE


#include <stdio.h>

#define IN  1
#define OUT 0

main()
1.5.4 Word Counting The fourth in our series of useful programs counts lines, words, and charac- ters, with the loose definition that a word is any sequence of characters that does not contain a blank, tab or newline. This is a bare-bones version of the UNIX program we. #include <stdio.h> #define IN 1 #define OUT 0 /* inside a word */ /* outside a word */ I* count lines, words, and characters in input */ main() { } int c, nl, nw, nc, state; state = OUT; nl = nw = nc = O; while ((c = getchar()) I= EOF) { ++nc; } if ( c == '\n' ) ++nl; if (c ==''II c == '\n' II c == '\t') state = OUT; else if (state == OUT) { state = IN; ++nw; } printf("%d %d %d\n", nl, nw, nc); Every time the program encounters the first character of a word, it counts SECTION 1.5 CHARACTER INPUT AND OUTPUT 21 one more word. The variable state records whether the program is currently in a word or not; iriitially it is "not in a word," which is assigned the value OUT. We prefer the symbolic constants IN and OUT to the literal values 1 and 0 because they make the program more readable. In a program as tiny as this, it makes little difference, but in larger programs, the increase in clarity is well worth the modest extra effort to write it this way from the beginning. You'll also find that it's easier to make extensive changes in programs where magic numbers appear only as symbolic constants. The line

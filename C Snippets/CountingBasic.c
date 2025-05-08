#include <stdio.h>

main() 
{
    long num_count = 0;

    while(getchar() != EOF)
        ++num_count;

    printf("\n%ld", num_count);
}

//2ND VER

#include <stdio.h> 

main()
{
    long count1;
    for(count1 = 0; getchar() != EOF; ++count1)
    ;
    printf("%ld\n", count1);
}

//LINE COUNTING

#include <stdio.h>

main()
{
    int c, n1 = 0;

    while((c = getchar()) != EOF)
        if(c == '\n')
            ++n1;

    printf("%d NUMBER", n1);
}

//TEST

 #include <stdio.h>

 main() {
     int c = 0;
 
     while ((c = getchar()) != EOF) {
         if (c == '\n' || c == ' ' || c == '\t') {
             putchar('\n');  
         } else {
             putchar(c);
         }
     }
 }

//Write a program to copy its input to its output, 
//replacing each tab by \t, each backspace by \b, and each backslash by 
//\ \. This makes tabs and backspaces visible in an unambiguous way.

#include <stdio.h>

main() {
    int character, last_char = '\0';

    while((character = getchar()) != EOF)
    {
        if(character == '\t')
        {
            putchar('\\');
            putchar('t');
        } else if(character == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else;
        putchar(character);
    }
}


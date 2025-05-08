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

// /Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>

#define IN_BLANK        1
#define OUT_OF_BLANK    0

main() {
    char c;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            putchar(' ');
            
        } else;
        putchar(c);
    
    } 
}


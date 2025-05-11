//Let us write a program to count the number of occurrences of each digit, of white space 
//characters (blank, tab, newline), and of all other characters. This is artificial, but 
//it permits us to illustrate several aspects of C in one program.

#include <stdio.h>

main()
{
    int inputVAR, wtspaceCount, elseCount;
    int countDigit[10];

    inputVAR = wtspaceCount = elseCount = 0;
    
    for(int i = 0; i < 10; i++)
    {
    countDigit[i] = 0;
    printf("Count: %d", countDigit[i]);
    }

    
}

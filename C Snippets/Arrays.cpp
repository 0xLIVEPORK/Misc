//Let us write a program to count the number of occurrences of each digit, of white space 
//characters (blank, tab, newline), and of all other characters. This is artificial, but 
//it permits us to illustrate several aspects of C in one program.
/*
#include <stdio.h>

main()
{
    int inputVAR, wtspaceCount, elseCount;
    int countDigit[10];

    inputVAR = wtspaceCount = elseCount = 0;
    
    for(int i = 0; i < 10; i++)
        countDigit[i] = 0;

    while((inputVAR = getchar()) != EOF)
        {
        if(inputVAR == ' ' || inputVAR == '\t' || inputVAR == '\n')
            ++wtspaceCount;
        else if(inputVAR >= '0' && inputVAR <= '9')
            ++countDigit[inputVAR - '0'];
        else
            ++elseCount;
        }

    printf("\nWHITE SPACE COUNT: %d\n"
           "ELSE COUNT: %d\n", wtspaceCount, elseCount);
           
    for(int i = 0; i < (sizeof(countDigit) / (sizeof(countDigit[0]))); i++)
        printf("DIGIT [%d]: %d\n", i, countDigit[i]);
}*/

//we're now making a historgam version instead the textbook told me to it horizontally but THAT'S TOO EASY
#include <stdio.h>

main()
{
    int inputVAR, wtspaceCount, elseCount;
    inputVAR = wtspaceCount = elseCount = 0;

    int countDigit[10];

    for(int i = 0; i < 10; i++)
        countDigit[i] = 0;

    while((inputVAR = getchar()) != EOF)
        if(inputVAR >= '0' && inputVAR <= '9')
            ++countDigit[inputVAR - '0'];

        else if(inputVAR == ' ' || inputVAR == '\n' || inputVAR == '\t')
            ++wtspaceCount;

        else
            ++elseCount;

    //GET HIGHEST NUM;
    int MAX = (wtspaceCount > elseCount) ? wtspaceCount : elseCount;
    for(int i = 0; i < 9; i++)
        int HIGHEST = wtspaceCount > elseCount;
        
}

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

//we're now making a histogram version instead the textbook told me to it horizontally but THAT'S TOO EASY
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
            {
            ++countDigit[inputVAR - '0'];
            }
            else if(inputVAR == ' ' || inputVAR == '\n' || inputVAR == '\t')
                {
                ++wtspaceCount;
                } else
                    { 
                    ++elseCount;
                    }

    //GET HIGHEST NUM;
    int MAX = (wtspaceCount > elseCount) ? wtspaceCount : elseCount;

    for(int i = 0; i < 10; i++)
        MAX = (MAX > countDigit[i] ? MAX : countDigit[i]);
    
    //GET HIGHEST NUM;


    //THIS SHIT SO UNREADABLE GANG BUT WHO ELSE NEEDS TO READS THIS?
    printf("[WHITE SPACE]  [ELSE:]  [0] [1] [2] [3] [4] [5] [6] [7] [8] [9]");
    for(int i = 0; i < MAX; i++)
    {
        printf("\n      %s           %s      %s   %s   %s   %s   %s   %s   %s   %s   %s   %s",
            (i >= MAX - wtspaceCount) ? "❚" : " ",
            (i >= MAX - elseCount) ? "❚" : " ",
            (i >= MAX - countDigit[0]) ? "❚" : " ",
            (i >= MAX - countDigit[1]) ? "❚" : " ",
            (i >= MAX - countDigit[2]) ? "❚" : " ",
            (i >= MAX - countDigit[3]) ? "❚" : " ",
            (i >= MAX - countDigit[4]) ? "❚" : " ",
            (i >= MAX - countDigit[5]) ? "❚" : " ",
            (i >= MAX - countDigit[6]) ? "❚" : " ",
            (i >= MAX - countDigit[7]) ? "❚" : " ",
            (i >= MAX - countDigit[8]) ? "❚" : " ",
            (i >= MAX - countDigit[9]) ? "❚" : " ");
     
    }
     
}

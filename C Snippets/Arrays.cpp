//Let us write a program to count the number of occurrences of each digit, of white space 
//characters (blank, tab,f
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

    printf("%d \n", elseCount); //TESTING CAUSE I'M SEEING ODD BEHAVIOR FROM ELSE PRINTER HISTOGRAM

    //THIS SHIT SO UNREADABLE GANG BUT WHO ELSE NEEDS TO READS THIS?
    printf("WHITE SPACE: %s       ELSE:      MAX: _\n", 
    for(int i = 0; i < MAX; i++)
    {
        printf("WHITE SPACE: %s       ELSE:      MAX: _\n", 
               (wtspaceCount != MAX) ? ((i < wtspaceCount) ? " " : "❚") : "❚",
               (elseCount != MAX) ? ((i < elseCount) ? " " : "❚") : "❚",
               (countDigit[0] != MAX) ? ((i < countDigit[0]) ? " " : "❚") : "❚",
               (countDigit[1] != MAX) ? ((i < countDigit[1]) ? " " : "❚") : "❚",
               (countDigit[2] != MAX) ? ((i < countDigit[2]) ? " " : "❚") : "❚",
               (countDigit[3] != MAX) ? ((i < countDigit[3]) ? " " : "❚") : "❚",
               (countDigit[4] != MAX) ? ((i < countDigit[4]) ? " " : "❚") : "❚",
               (countDigit[5] != MAX) ? ((i < countDigit[5]) ? " " : "❚") : "❚",
               (countDigit[6] != MAX) ? ((i < countDigit[6]) ? " " : "❚") : "❚",
               (countDigit[7] != MAX) ? ((i < countDigit[7]) ? " " : "❚") : "❚",
               (countDigit[8] != MAX) ? ((i < countDigit[8]) ? " " : "❚") : "❚",
               (countDigit[9] != MAX) ? ((i < countDigit[9]) ? " " : "❚") : "❚")
               ;
              
    }
     
}

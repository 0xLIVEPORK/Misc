/*
#include <stdio.h>

int testfuct();

main()
{
    printf("Test GCC -std=c89: %d", testfuct(10, 10));
}

testfuct(base, n)
int base, n;
{
    int cock = base * n;

    return cock;
}

*/


//HISTOGRAM
//K&R C - REMEMBER THESE COMPILER FLAGS
//gcc -std=c89 [file] -o [filename]
#include <stdio.h>

int hstDisplay();

main()
{
    printf("TEST: "); hstDisplay(10);
}

hstDisplay(stkheight)
int stkheight;
    {
        for(; stkheight >= 0 ; --stkheight)
            printf('|');
    }

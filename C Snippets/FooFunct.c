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

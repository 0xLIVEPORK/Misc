//gcc -std=c89 fahr.c -o fahr
//don't bother doing -Wall or  -Pedantic that shit will stop you like a gatekeeper of terrible code.

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

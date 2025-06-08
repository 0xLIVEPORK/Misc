#include <stdio.h>
#include <string.h>

void reversi(char word[]);

int main(void) {
    char test[10] = "balls";

    reversi(test);
}


void reversi(char word[])
    {
    putchar('\n');
        for(int i = 0; i <= strlen(word); i++)
            {
                putchar(word[strlen(word)- i]);
            }
    }

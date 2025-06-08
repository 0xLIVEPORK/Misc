#include <stdio.h>
#include <string.h>

void reversi(char word[]);

int main(void) {
    char test[10] = "balls";

    reversi(test);
}

//PORK WAS HERE
void reversi(char word[])
    {
    putchar('\n');
        for(int i = 0; i <= strlen(word); i++)
            {
                putchar(word[strlen(word)- i]);
            }
    }

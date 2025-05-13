//K&R pre C89

#include <stdio.h>

int Exponent(int base, int exponent)
    {
        int x = base;
        for(exponent; exponent >= 0; exponent--)
            base = base * x;
            printf("%d", base); //testing
            

        return base;
    }

main() {
    printf("TEST: %d\n", Exponent(2, 4));
}
    
#include <stdio.h>

int power();

main()

power(base, n)
int base, n;

{

    //TS
}

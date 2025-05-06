#include <stdio.h>

main() 
{
    long num_count = 0;

    while(getchar() != EOF)
        ++num_count;

    printf("\n%ld", num_count);
}

//2ND VER

#include <stdio.h> 

main()
{
    long count1;
    for(count1 = 0; getchar() != EOF; ++count1)
    ;
    printf("%ld\n", count1);
}

//LINE COUNTING

#include <stdio.h>

main()
{
    int c, n1 = 0;

    while((c = getchar()) != EOF)
        if(c == '\n')
            ++n1;

    printf("%d NUMBER", n1);
}

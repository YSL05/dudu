#include <stdio.h>

main ()
{
    int c;
    printf("EOF: %d", EOF);
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("EOF: %d", c);
}
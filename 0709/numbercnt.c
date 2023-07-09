#include <stdio.h>

/*统计数字、空白符、其他字符*/
main ()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        if(c <= '9' && c >= '0'){
            ++ndigit[c - '0'];
        }
        else if(c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }
        else{
            ++nother;
        }
    }
    printf("ndigits: ");
    for (i = 0; i < 10; ++i)
    {
        printf("%d\t", ndigit[i]);
    }
    printf("white space: %d\n other: %d\n", nwhite, nother);
}
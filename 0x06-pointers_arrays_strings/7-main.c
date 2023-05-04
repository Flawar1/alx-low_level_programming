#include "main.h"
#include <stdio.h>

/* Function prototype for the leet() function */
char *leet(char *s);

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p = leet(s);
    printf("%s", p);
    return 0;
}


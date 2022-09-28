#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *g = "All is in this world  going to be well";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    printf("%s\n", _strstr(g, f));
    return (0);
}

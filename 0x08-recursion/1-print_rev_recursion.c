#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s){
    if (*s )
    {
        _print_rev_recursion(s+1);
        _putchar(*s);

    }
    else
    {
        _putchar('\n');

    }

}

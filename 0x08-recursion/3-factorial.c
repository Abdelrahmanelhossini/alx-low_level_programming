#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int factorial(int n)
{
int f;
    if (n < 0){
        return -1;
    }
    if(n == 0){
        return 1;
    }
    else
    {

    f = n * factorial(n-1);
    }
    return f;
}

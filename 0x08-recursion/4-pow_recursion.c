#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
    int f;
    if (y < 0 ){
        return -1;
    }
    if(y == 0){
        return 1;
    }
    else
    {
        f = x * _pow_recursion(x,y-1);
    }
    return f;
}

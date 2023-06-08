#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int sqt_rec(int n,int v){
    if (v * v == n)
    {
     return v;
    }
    else if (v * v < n ) {
       return sqt_rec(n,v+1);
    }
    else
        return -1;
};
int _sqrt_recursion(int n)
{
    return sqt_rec(n,1);

}

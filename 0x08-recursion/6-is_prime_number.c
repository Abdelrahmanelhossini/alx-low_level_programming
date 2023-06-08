#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int prime_num(int n , int x){
    if(x == 1){
        return (1);
    }else if (n % x == 0 && x > 0 ){
        return (0);
    }

    else
        return (prime_num(n,x-1));
}
int is_prime_number(int n){
    if (n <2 )
        return (0);

    return (prime_num(n,n-1));
}

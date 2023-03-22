#include "main.h"
/**
 * _abs - function that computes absolute value
 *
 * @n: take integer type input for function
 *
 * Return: return absolute number
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

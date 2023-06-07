#include<unistd.h>
#include "main.h"
/**
 * _putchar -write the cgaracter c to stdout
 * @c: the charcter to print
 *
 * Return:on success 1.
 * on error,-1 is returned,and errno is set appropri ately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

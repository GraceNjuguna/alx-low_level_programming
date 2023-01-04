#include "main.h"
#include <unistd.h>

/**
 * _putchar writes all the character c to stdout
 * @c is the character to print out
 * Return: On success 1.
 * On error, -1 is returned, and err is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c,1));
}

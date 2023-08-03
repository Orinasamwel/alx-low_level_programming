#include <unistd.h>

/*
 * Writes the character c to standard output
 * Return: 1. on success and -1. on error.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

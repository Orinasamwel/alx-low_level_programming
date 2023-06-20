#include "main.h"

/**
 * main - Entry point
 *Description: function that prints the last digit of a number
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int m;
	m = n % 10;
	if (m < 0)
		
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}


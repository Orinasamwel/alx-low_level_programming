#include <stdio.h>
/**
 *main - Entry point
 *Description - print alpabets in lowercase and uppercase
 *Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar('a' + n);
	}
	for (n = 0; n < 26; n++)
	{
		putchar('A' + n);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print alpabets in lowercase and uppercase'
 *return: always 0
 */
int main(void)
{
        int n = 97;
	int m = 65;
        while (n <= 122)
        {
                putchar(n);
		n++;
        }
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
        putchar('\n');
        return (0);
}

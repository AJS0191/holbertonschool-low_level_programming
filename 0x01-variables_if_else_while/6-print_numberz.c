#include <stdio.h>
/**
 * main - entry point to program
 * VOID
 *
 * Description: function prints numbers under 10
 *
 *
 * Return: 0
 */

int main(void)
{
	unsigned int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

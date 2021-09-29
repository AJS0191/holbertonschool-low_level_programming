#include <stdio.h>
/**
 * main - entry point to program
 * VOID
 *
 * Description: Print the single digits of base 16
 *
 *
 * Return: 0
 */

int main(void)

{
	unsigned int a = '0';
	unsigned int x = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

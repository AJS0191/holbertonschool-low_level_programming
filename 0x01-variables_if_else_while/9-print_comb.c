#include <stdio.h>
/**
 * main - entry point to program
 * VOID
 *
 * Description: 0 though 9 with commas
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
		putchar(',');
		putchar(' ');
		a++;
	}
	return (0);
}

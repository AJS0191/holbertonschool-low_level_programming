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

	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
		{
			a++;
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	return (0);
}

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
		if (a == 9)
		{
			putchar(a);
			a++;
		}
		else
		{
			putchar(a);
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	return (0);
}

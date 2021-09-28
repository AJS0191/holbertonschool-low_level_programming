#include <stdio.h>
/**
 * main - entry point to program
 * VOID
 *
 * Description: Gives a random number than evalutes the last digit and prints
 * results
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q')
		{
			alpha++;
		putchar(alpha);
		}
		else if (alpha == 'e')
		{
			alpha++;
		putchar(alpha);
		}
		else
		{
		putchar(alpha);
		alpha++;
		}
	}
	alpha++;
	putchar('\n');
	return (0);
}
